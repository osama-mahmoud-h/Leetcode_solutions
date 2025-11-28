class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> g(n);
        vector<int> deg(n, 0);

        for (auto &e : edges) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
            deg[e[0]]++;
            deg[e[1]]++;
        }

        queue<int> q;
        vector<bool> removed(n, false);

        // Initialize queue with leaves
        for (int i = 0; i < n; i++) {
            if (deg[i] <= 1) q.push(i);
        }

        long long cnt = 0;
        vector<long long> val(values.begin(), values.end());

        while (!q.empty()) {
            int u = q.front();
            q.pop();
            if (removed[u]) continue;

            removed[u] = true;

            if (val[u] % k == 0) {
                // count as separate component
                cnt++;
            } else {
                // merge into parent if exists
                for (int v : g[u]) {
                    if (!removed[v]) {
                        val[v] += val[u];
                        break; // only one parent since it's a leaf
                    }
                }
            }

            // update neighbors
            for (int v : g[u]) {
                if (!removed[v]) {
                    deg[v]--;
                    if (deg[v] == 1) {
                        q.push(v);
                    }
                }
            }
        }

        return cnt;
    }
};
