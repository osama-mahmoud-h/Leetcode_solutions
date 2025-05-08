
class Edge{
public:
    int x;
    int y;
    int weight;
    Edge(int x, int y, int weight) : x(x), y(y), weight(weight) {}
};
class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int OO = INT_MAX;
        int n = moveTime.size(), m = moveTime[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,0));
        vector<vector<int>>dist(n,vector<int>(m,OO));

        auto cmp = [](const Edge &a, const Edge &b){return a.weight > b.weight ;};
        priority_queue<Edge,vector<Edge>, decltype(cmp)>pq(cmp);
        pq.push({0,0,0});

        int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        dist[0][0] = 0;

        while(!pq.empty()){
            Edge edge = pq.top();
            pq.pop();
            if(visited[edge.x][edge.y])
                continue;
            visited[edge.x][edge.y] = 1;
            bool moved = 0;
            for (const auto &dir: dirs){
                int new_x = edge.x + dir[0] , new_y =  edge.y + dir[1];
                if(new_x >= n or new_x < 0 or new_y >= m or new_y < 0 )
                    continue;

                int new_dist = max(dist[edge.x][edge.y], moveTime[new_x][new_y]) + (new_x+new_y)%2+1;
                if(new_dist < dist[new_x][new_y]){
                    dist[new_x][new_y] = new_dist;
                    pq.push({new_x, new_y, new_dist});
                }
            }

        }
        
        return dist[n-1][m-1];
    }
};