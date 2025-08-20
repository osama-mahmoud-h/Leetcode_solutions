class Solution {
private:
    int solve(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& memo){
        int n = matrix.size(), m = matrix[0].size();
        if(i >= n or j >= m or matrix[i][j] == 0){
            return 0;
        }
        if(memo[i][j] != -1){
            return memo[i][j];
        }
        int right = solve(i, j+1, matrix, memo);
        int diagonal = solve(i+1, j+1, matrix, memo);
        int down = solve(i+1, j, matrix, memo);
        
        return memo[i][j] = 1 + min({right, diagonal, down});
    }
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> memo = vector<vector<int>>(n, vector<int>(m, -1));
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                ans += solve(i,j,matrix, memo);
            }
        }
        return ans;
    }
};