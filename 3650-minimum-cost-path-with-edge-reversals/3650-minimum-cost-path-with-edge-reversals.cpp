class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
          // Build adjacency list
    vector<vector<pair<int, int>>> adj(n);
    for (auto& e : edges) {
        int src = e[0], dist = e[1], w = e[2];
        adj[src].push_back({dist, w});
        adj[dist].push_back({src, w * 2}); // undirected
    }

    const long long INF = 1e18;
    vector<long long> dist(n, INF);
    dist[0] = 0;

    priority_queue<
        pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>
    > pq;

    pq.push({0, 0});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;
        if (u == n - 1) break;  // early stop

        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist[n - 1] == INF ? -1 : dist[n - 1];
    }
};