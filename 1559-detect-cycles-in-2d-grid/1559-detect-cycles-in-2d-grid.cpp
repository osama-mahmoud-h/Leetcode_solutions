class Solution {
public:
    vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
    bool vis[501][501];
    
    bool dfs(vector<vector<char>>& ar,char curr,pair<int,int>idx,pair<int,int>parent){
          
    if(idx.first<0||idx.first>=ar.size()||idx.second<0||idx.second>=ar[0].size()
       ||ar[idx.first][idx.second]!=curr){
        return false;
    }
      
    if(vis[idx.first][idx.second]){
        return 1;
    }
       
        
        vis[idx.first][idx.second]=1;
    for(auto p:dir){
        if((p[0]+idx.first == parent.first)&&((p[1]+idx.second == parent.second))){
            //do nothing
        } else{
                     

            if(dfs(ar,curr,{p[0]+idx.first,p[1]+idx.second},{idx.first,idx.second})){
                return 1;
            }
        }
    }
        
        return 0;
}
bool containsCycle(vector<vector<char>>& grid) {
    int n=grid.size();
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <grid[i].size() ; ++j) {
    vis[i][j]=0;
        }
    }
            
            
            
            for (int i = 0; i < n; ++i) {
        for (int j = 0; j <grid[i].size() ; ++j) {
            if(!vis[i][j])
            if(dfs(grid,grid[i][j],make_pair(i,j),make_pair(-1,-1)))
                return 1;
            //cout<<"----------\n";
        }
        
    }
    return 0;
}
};