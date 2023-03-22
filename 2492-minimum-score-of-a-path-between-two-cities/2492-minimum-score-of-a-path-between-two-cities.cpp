class Solution {
private:

// Hash function
    struct hashFunction
    {
        size_t operator()(const pair<int ,
                int> &x) const
        {
            return x.first ^ x.second;
        }
    };

    int mn = 1e8;
    void dfs(int st,vector<vector<pair<int,int>>>& adj,unordered_set<pair<int,int>,hashFunction>&vis){

        for (const auto &item: adj[st]){
            if(vis.find({st,item.first})==vis.end()){
                vis.insert({st, item.first});
                 vis.insert({item.first,st});
                mn = min(mn,item.second);
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
        unordered_set<pair<int,int>,hashFunction> vis;
        dfs(1,adj,vis);
        return mn;
    }
};