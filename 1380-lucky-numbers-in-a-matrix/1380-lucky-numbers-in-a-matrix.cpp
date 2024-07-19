class Solution {
private:
    int get_max_in_col(vector<vector<int>>& matrix, int col_idx){
        int mx = -1;
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            mx = max(mx, matrix[i][col_idx]);
        }
        return mx;
    }
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int col = 0;
        vector<int>ans;
        int mn_row = 0, mn_row_idx;
        for (const auto &item: matrix){
            auto minElementIterator = min_element(item.begin(), item.end());
            int index = distance(item.begin(), minElementIterator);
            int get_mx_in_col = get_max_in_col(matrix, index);
            if(*minElementIterator == get_mx_in_col)
                ans.push_back(get_mx_in_col);
            ++col;
        }


        return ans;
    }
};