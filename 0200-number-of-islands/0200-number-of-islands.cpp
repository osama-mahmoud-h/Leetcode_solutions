class Solution {
public:
vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
int dfs(vector<vector<char>>& grid,int i,int j){
    int n = grid.size() , m = grid[0].size();
    if(i<0||i>=n||j<0||j>=m || grid[i][j]=='0'){
        return 0;
    }
    grid[i][j] = '0';
    int ans=0;
    for(auto d:dir){
        ans+= 1 + dfs(grid,i+d[0],j+d[1]);
    }
    return ans;

}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size() , m = grid[0].size();
        int ans = 0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(dfs(grid,i,j)>0)
                ans++;
           }
       }
        
        return ans;
    }
};