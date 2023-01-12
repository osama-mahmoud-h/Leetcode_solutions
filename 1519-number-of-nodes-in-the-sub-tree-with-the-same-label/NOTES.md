```
class Solution{
private:
void dfs(int start,
vector<vector<int>>&adj,
map<char,queue<int>> &map,
string &labels,
vector<int> &ans,
vector<bool>&vis){
map[labels[start]].push(start);
vis[start]=1;
for(auto node:adj[start]){
if(!vis[node])
dfs(node,adj,map,labels,ans,vis);
}
if(map[labels[start]].size()){
cout<<"end: "<<start<<" , top: "<<(map[labels[start]].front())<<" , size "<<map[labels[start]].size()<<"\n";
ans[start]+=map[labels[start]].size();
map[labels[start]].pop();
}
}
public:
vector<int> countSubTrees(int n, vector<vector<int>>& edges,string labels) {