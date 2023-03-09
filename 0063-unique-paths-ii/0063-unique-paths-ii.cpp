class Solution {
private:
    vector<vector<int>>memo;
    int helper(int i,int j,vector<vector<int>> &ar){
        int n = ar.size() , m = ar[0].size();
        if(i<0 || j<0 ||j>=m || i>=n ||ar[i][j]==1 ){
            return 0;
        }
        if(i==n-1 && j==m-1) return 1;
        
        if(memo[i][j]!=-1){
            return memo[i][j];
        }

        int right = helper(i,j+1,ar);
        int left = helper(i+1,j,ar);
        
        memo[i][j] = right+left;
        
        return left+right;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size() , m = obstacleGrid[0].size();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(0,0,obstacleGrid);
    }
};