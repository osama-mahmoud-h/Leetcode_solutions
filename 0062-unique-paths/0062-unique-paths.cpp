class Solution {
private:
    vector<vector<int>>memo;
    int helper(int i,int j,int n,int m){
        if(i<0 || j<0 ||j>=m || i>=n ){
            return 0;
        }
        if(i==n-1 && j==m-1) return 1;

        if(memo[i][j]!=-1){
            return memo[i][j];
        }

        int right = helper(i,j+1,n,m);
        int left = helper(i+1,j,n,m);
        memo[i][j] = right+left;
        return left+right;
    }
public:
    int uniquePaths(int n, int m) {
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(0,0,n,m);
    }
};