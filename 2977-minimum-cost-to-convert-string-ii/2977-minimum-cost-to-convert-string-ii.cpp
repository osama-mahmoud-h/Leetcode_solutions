class Solution {
public:
    static constexpr long long INF = 1e18;

    // ---------- Trie ----------
    struct TrieNode {
        TrieNode* next[26]{};
        vector<int> ids; // string IDs ending here
    };

    TrieNode* newNode() {
        return new TrieNode();
    }

    void insert(TrieNode* root, const string& s, int id) {
        TrieNode* cur = root;
        for (char c : s) {
            int x = c - 'a';
            if (!cur->next[x]) cur->next[x] = newNode();
            cur = cur->next[x];
        }
        cur->ids.push_back(id);
    }

    // ---------- Members ----------
    string source, target;
    int n;

    TrieNode *rootO, *rootC;

    unordered_map<string, int> id;
    vector<vector<long long>> dist;
    vector<long long> memo;

    // ---------- DFS + memo ----------
    long long dfs(int i) {
        if (i == n) return 0;
        if (memo[i] != -1) return memo[i];

        long long ans = INF;

        // Case 1: no operation
        if (source[i] == target[i]) {
            ans = dfs(i + 1);
        }

        // Case 2: Trie traversal
        TrieNode* pO = rootO;
        TrieNode* pC = rootC;

        for (int j = i; j < n; ++j) {
            int a = source[j] - 'a';
            int b = target[j] - 'a';

            if (!pO->next[a] || !pC->next[b]) break;

            pO = pO->next[a];
            pC = pC->next[b];

            for (int u : pO->ids) {
                for (int v : pC->ids) {
                    if (dist[u][v] == INF) continue;
                    long long nxt = dfs(j + 1);
                    if (nxt != INF) {
                        ans = min(ans, dist[u][v] + nxt);
                    }
                }
            }
        }

        return memo[i] = ans;
    }

    // ---------- Main ----------
    long long minimumCost(
        string src,
        string tgt,
        vector<string>& original,
        vector<string>& changed,
        vector<int>& cost
    ) {
        source = src;
        target = tgt;
        n = source.size();

        // Step 1: map strings to IDs
        for (auto& s : original) id[s] = 0;
        for (auto& s : changed)  id[s] = 0;

        int idx = 0;
        for (auto& [k, _] : id) id[k] = idx++;

        int m = id.size();
        dist.assign(m, vector<long long>(m, INF));
        for (int i = 0; i < m; ++i) dist[i][i] = 0;

        // Step 2: initialize graph
        for (int i = 0; i < cost.size(); ++i) {
            int u = id[original[i]];
            int v = id[changed[i]];
            dist[u][v] = min(dist[u][v], (long long)cost[i]);
        }

        // Step 3: Floyd–Warshall
        for (int k = 0; k < m; ++k)
            for (int i = 0; i < m; ++i)
                for (int j = 0; j < m; ++j)
                    if (dist[i][k] < INF && dist[k][j] < INF)
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

        // Step 4: build Tries
        rootO = newNode();
        rootC = newNode();

        for (auto& [s, i] : id) {
            insert(rootO, s, i);
            insert(rootC, s, i);
        }

        // Step 5: DFS
        memo.assign(n, -1);
        long long res = dfs(0);

        return res == INF ? -1 : res;
    }
};
