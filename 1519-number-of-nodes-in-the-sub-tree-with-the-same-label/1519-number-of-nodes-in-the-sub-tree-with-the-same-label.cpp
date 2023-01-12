class Solution{
private:
    void dfs(int start,
             vector<vector<int>>&adj,
             map<char,stack<int>> &map,
             string &labels,
             vector<int> &ans,
             vector<bool>&vis){
        
        map[labels[start]].push(1);
        vis[start]=1;
       for(auto node:adj[start]){
           if(!vis[node])
               dfs(node,adj,map,labels,ans,vis);
       }
       
       if(map[labels[start]].size()){
           int top =  map[labels[start]].top();
         
           ans[start]=top;
           map[labels[start]].pop();
           if( map[labels[start]].size()){//increase parent
                 top += map[labels[start]].top();
                  map[labels[start]].pop();
                  map[labels[start]].push(top);
           }
       } 
      
    }
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges,string labels) {
        vector<int> ans(n,0);
        vector<bool>vis(n,0);
        
        vector<vector<int>> adj(n);
        map<char,stack<int>> map;
        for(auto vc:edges){
           adj[vc[0]].push_back(vc[1]);
           adj[vc[1]].push_back(vc[0]);
        }
         dfs(0,adj,map,labels,ans,vis);
        return ans;
    }
};
