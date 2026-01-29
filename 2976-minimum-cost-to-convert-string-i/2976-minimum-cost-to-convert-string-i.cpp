class Solution {
public:
    long long minimumCost(
        string source,
        string target,
        vector<char>& original,
        vector<char>& changed,
        vector<int>& cost
    ) {
        const long long INF = 1e18;

        // dist[i][j] = min cost to convert i -> j
        vector<vector<long long>> dist(26, vector<long long>(26, INF));

        // cost to convert char to itself is 0
        for (int i = 0; i < 26; ++i)
            dist[i][i] = 0;

        // direct edges
        for (int i = 0; i < original.size(); ++i) {
            int u = original[i] - 'a';
            int v = changed[i] - 'a';
            dist[u][v] = min(dist[u][v], (long long)cost[i]);
        }

        // Floyd–Warshall
        for (int k = 0; k < 26; ++k) {
            for (int i = 0; i < 26; ++i) {
                for (int j = 0; j < 26; ++j) {
                    if (dist[i][k] < INF && dist[k][j] < INF) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        // build answer
        long long ans = 0;
        for (int i = 0; i < source.size(); ++i) {
            int s = source[i] - 'a';
            int t = target[i] - 'a';

            if (dist[s][t] == INF)
                return -1;

            ans += dist[s][t];
        }

        return ans;
    }
};
