class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int neg_cnt = 0, min_el = INT_MAX;
        long long sum = 0;
        for (const auto &row: matrix){
            for (const auto &item: row){
                min_el = min(min_el, abs(item));
                sum += abs(item);
                if(item < 0){
                    neg_cnt ++;
                }
            }
        }
        if(neg_cnt % 2 == 1)
            sum -= (2 * min_el);
        return sum;
    }
};