class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int ans = 0, j = 0;
       
        for (int i = n-1; i >= 0; --i){
            while (j < m and grid[i][j] >= 0)
                j++;
            ans += m - j;
        }
        return ans;
    }
};