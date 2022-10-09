class Solution {
    vector<vector<vector<int>>> memo;

    int mod =1e9+7;
int helper(vector<vector<int>>& grid,int i,int j,int sum ,int k){
    int n=grid.size(), m =grid[0].size();
    if(i>=n || j>=m){
        return 0;
    }
    
    if(memo[i][j][(sum+grid[i][j])%k]!=-1){
        return memo[i][j][(sum+grid[i][j])%k];
    }
    if((i==n-1)&&(j==m-1)&&((sum+grid[i][j])%k==0)){
        return 1;
    }
    
    return memo[i][j][(sum+grid[i][j])%k] = (helper(grid,i+1,j,sum+grid[i][j],k)%mod +helper(grid,i,j+1,sum+grid[i][j],k)%mod)%mod ;
}
    public:
int numberOfPaths(vector<vector<int>>& grid, int k) {
     int n=grid.size(), m =grid[0].size();
    memo = vector<vector<vector<int>>>(n,vector<vector<int>>(m,vector<int>(51,-1))) ;
    return helper(grid,0,0,0,k);
}
};