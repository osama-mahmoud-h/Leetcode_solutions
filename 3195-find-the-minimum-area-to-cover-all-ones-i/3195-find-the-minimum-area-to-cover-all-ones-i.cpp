class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int max_row = 0,
            min_row = 0,
            max_col = 0,
            min_col = 0;
        int n = grid.size(), m = grid[0].size();
        // get up and down borders.
        for (int l = 0, h = n-1; l < n; l++, h--) {
            int max_el_up = *max_element(grid[l].begin(), grid[l].end());
            if(max_el_up > 0 and !min_row){
                min_row = l + 1;
            }
            int max_el_down = *max_element(grid[h].begin(), grid[h].end());
            if(max_el_down > 0 and !max_row){
                max_row = h + 1;
            }
        }
        
        // get left and right borders 
        for (int l = 0, h = m-1; l < m; l++, h--) {
            for (int i = 0; i < n; ++i) {
                if(grid[i][l]==1 and !min_col){
                    min_col = l + 1;
                }
                if(grid[i][h]==1 and !max_col){
                    max_col = h + 1;
                }
            }
        }
        
        return (max_row - min_row + 1) * (max_col - min_col + 1);
    }
};