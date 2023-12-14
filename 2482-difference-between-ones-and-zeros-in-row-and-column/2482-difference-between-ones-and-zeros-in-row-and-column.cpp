class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        unordered_map<int,vector<int>>rows;
        unordered_map<int,vector<int>>cols;
        //loop rows;
        for (int i = 0; i < n; ++i) {
            int ones = 0, zeros = 0;
            for (int j = 0; j < m; ++j) {
                if(grid[i][j] == 1){
                    ones++;
                } else{
                    zeros++;
                }
            }
            rows[i].push_back(ones);
            rows[i].push_back(zeros);
        }
        
        //loop cols;
        for (int j = 0; j < m; ++j) {
            int ones = 0, zeros = 0;
            for (int i = 0; i < n; ++i) {
                if(grid[i][j] == 1){
                    ones++;
                } else{
                    zeros++;
                }
            }
            cols[j].push_back(ones);
            cols[j].push_back(zeros);
        }
        
        // loop array
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int diff = rows[i][0] + cols[j][0] - rows[i][1]  - cols[j][1];
                grid[i][j] = diff;
            }
        }
        
        return grid;
    }
};
