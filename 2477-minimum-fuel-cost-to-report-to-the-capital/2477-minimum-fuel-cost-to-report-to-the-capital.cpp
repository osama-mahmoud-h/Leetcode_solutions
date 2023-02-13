
class Solution {
private:
long long int  ans = 0;
long long int  dfs(int st,int seats,vector<vector<int>> &adj,vector<bool> &vis){
  vis[st] = 1 ;

  
  long long int sum = 1;
  for(auto u:adj[st]){
    if(!vis[u]){
      sum += dfs(u,seats,adj,vis);
    }
  }
  if(st!=0){
    ans +=ceil((double)sum*1.0/seats);
    //cout<<"sum: "<<sum<<" , node: "<<st<<"\n";
    }
  return sum;
 
}
public:
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
      int n = roads.size() + 1;
      vector<vector<int>> adj(n);
      vector<bool> visited(n,0);
        
      for(auto road:roads){
        adj[road[0]].push_back(road[1]);
        adj[road[1]].push_back(road[0]);  
      }
        
      dfs(0,seats,adj,visited);
        
        return ans;
    }
};