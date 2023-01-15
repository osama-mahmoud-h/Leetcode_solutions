
class UnionFind{
private:
    vector<int>parent;
public:
    UnionFind(int n){
        parent = vector<int>(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }
    int find(int x){
        return parent[x] = (parent[x] == x ? x : find(parent[x]));
    }
    void Union(int u, int v){ //Union by Rank . Returns TRUE if UNION can be performed without introducing any cycle
        //Get the representatives of the vertices
        int ru = find(u);
        int rv = find(v);
        if(ru == rv) return ;
        parent[rv] = parent[ru];
    }
};

class Solution{
private:

public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
      int n = vals.size();
      vector<vector<int>>adj(n);
      
      for(auto &edg:edges){
          adj[edg[0]].push_back(edg[1]);
          adj[edg[1]].push_back(edg[0]);
      }
      
      map<int,vector<int>>valsToNodes;

        for (int i = 0; i <n ; ++i) {
            valsToNodes[vals[i]].push_back(i);
        }

        int ans=0;
        UnionFind uf(n);
        
        

      for(auto& [val,nodes] : valsToNodes){

          for(auto node:nodes){
              for(auto neighbour:adj[node] ){ //loop neighbours of
                  if( vals[node]>=vals[neighbour] ){
                      uf.Union(node,neighbour);
                  }
              }
          }
          
           unordered_map<int,int>groups;
          
              for(auto i:nodes){
                  groups[uf.find(i)]++;
              }
              
              for(auto& [_,freq] : groups ){
                  ans += (freq * (freq + 1) / 2);
              }


      }

        return ans;
    }

};