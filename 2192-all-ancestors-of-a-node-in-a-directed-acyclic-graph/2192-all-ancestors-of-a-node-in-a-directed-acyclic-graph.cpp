class Solution {
public:
    void dfs(vector<vector<int>>&adj,int st,set<int>&ancestors){
    if(adj[st].size()==0){
        return;
    }
   // ancestors.insert(st);
    for(auto n:adj[st]){
        if(!(ancestors.find(n)!=ancestors.end())){
        ancestors.insert(n);
        dfs(adj,n,ancestors);
        }
    }
}
vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<vector<int>>adj(n);
    vector<vector<int>>res(n);

    for(auto edge:edges){
        adj[edge[1]].push_back(edge[0]);
    }
    set<int>ancestors;
    for (int i = 0; i <n ; ++i) {
        ancestors.clear();
        dfs(adj,i,ancestors);
        
        vector<int>ances;
        for(auto i:ancestors){
            ances.push_back(i);
        }
        res[i] = ances;
    }

return res;
}
};