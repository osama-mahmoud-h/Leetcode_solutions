
class Solution {
private:
    void bfs(vector<vector<int>>&adj,int st,vector<int>&dist,vector<bool>vis){
        queue<int>q;
        q.push(st);
        
        int move = 0;
        vis[st]=1;
        
        while (q.size()){
            int sz = q.size();
            for (int i = 0; i < sz; ++i) {
                int cur = q.front();
                q.pop();
                dist[cur] = move;
                for(auto nighbour:adj[cur]){
                    if(vis[nighbour]){
                        continue;
                    }
                    q.push(nighbour);
                    vis[nighbour]=1;
                }
            }
            move++;
        }
    }
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {

        int n = edges.size();
        vector<vector<int>>adj(n);

        vector<int> aDist(n,-1);
        vector<int> bDist(n,-1);

        //directed graphs
        for (int i = 0; i < n; ++i) {
            if(edges[i]!=-1){
                adj[i].push_back(edges[i]);
            }
        }
        bfs(adj,node1,aDist,vector<bool>(n,0));
        bfs(adj,node2,bDist,vector<bool>(n,0));

        int ans = -1,mn  = 1e7;
        for (int i = 0; i < edges.size(); ++i)
            if (min(aDist[i], bDist[i]) >= 0 && max(aDist[i], bDist[i]) < mn) {
                mn = max(aDist[i], bDist[i]);
                ans = i;
            }


        return ans;
    }
};
/*
[4,4,8,-1,9,8,4,4,1,1]
[0,1,2,3, 4,5,6,7,8,9,10]
*/
