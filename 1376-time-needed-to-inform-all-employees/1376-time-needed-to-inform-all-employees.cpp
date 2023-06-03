
class Solution {
private:
    int dfs(vector<vector<int>>&adj,int st,vector<int>& informTime){
        int mx = 0;

        for (const auto &item: adj[st]){
            mx = max(mx, dfs(adj,item,informTime));
        }
        return mx+informTime[st];
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>>adj(n);
        for (int i = 0; i < n; ++i) {
            if(manager[i]==-1)
                continue;
            adj[manager[i]].push_back(i);
        }
        return dfs(adj,headID,informTime);
    }
};