class Solution {
private:
    int mn = 1e8;
    void dfs(int st,vector<vector<pair<int,int>>>& adj,vector<bool>&vis){
        vis[st] = 1;
        for (const auto &item: adj[st]){
             mn = min(mn,item.second);
            if(!vis[item.first]){
                dfs(item.first,adj,vis);
            }
        }

    }
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);

        for (const auto &item: roads){
            adj[item[0]].push_back({item[1],item[2]});
            adj[item[1]].push_back({item[0],item[2]});
        }
        vector<bool>visted(n+1,0);
        dfs(1,adj,visted);
        return mn;
    }
};