#define ll long long int


class Solution {
private :
    bool can_make_h_cut(vector<vector<int>>& grid){
        int n = grid.size(), m = grid[0].size();
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            ll  row_sum = 0;
            for (int j = 0; j < m; ++j) {
                row_sum+=grid[i][j];
            }
            sum += row_sum;
        }
        ll sec_sum = 0;
        for (int i = 0; i < n; ++i) {
            ll  row_sum = 0;
            for (int j = 0; j < m; ++j) {
                row_sum+=grid[i][j];
            }
            sec_sum += row_sum;
            sum -= row_sum;
            if(sec_sum == sum)
                return 1;
        }
        return 0;
    }

    bool can_make_v_cut(vector<vector<int>>& grid){
        int n = grid.size(), m = grid[0].size();
        ll sum = 0;
        for (int i = 0; i < m; ++i) {
            ll  col_sum = 0;
            for (int j = 0; j < n; ++j) {
                col_sum += grid[j][i];
            }
            sum += col_sum; 
        }

        ll sec_sum = 0;
        for (int i = 0; i < m; ++i) {
            ll  col_sum = 0;
            for (int j = 0; j < n; ++j) {
                col_sum += grid[j][i];
            }
            sum -= col_sum;
            sec_sum += col_sum;
            
            if(sec_sum == sum )
                return 1;
        }
        return 0;
    }
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        return can_make_h_cut(grid) or can_make_v_cut(grid);
    }
};