class Solution {
private:
    int OO = 1e7;
    vector<vector<int>>memo;
    int helper(int i,int j,vector<vector<int>> &ar){
        int n = ar.size() , m = ar[0].size();
        if(i<0 || j<0 ||j>=m || i>=n  ){
            return OO;
        }
        if(i==n-1 && j==m-1) return ar[i][j];

        if(memo[i][j]!=-1){
            return memo[i][j];
        }

        int right = ar[i][j] + helper(i,j+1,ar);
        int left = ar[i][j] + helper(i+1,j,ar);
        
        memo[i][j] = min(left,right);
        return min(left,right);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(0,0,grid);
    }
};
