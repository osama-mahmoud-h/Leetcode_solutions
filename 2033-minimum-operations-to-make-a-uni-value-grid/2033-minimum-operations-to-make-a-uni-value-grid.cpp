class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> flat;
        
        for (auto &row : grid) {
            for (int val : row) {
                flat.push_back(val);
            }
        }

        int base = flat[0];
        for (int val : flat) {
            if ((val - base) % x != 0)
                return -1;
        }

        sort(flat.begin(), flat.end());
        int median = flat[flat.size() / 2];

        int ans = 0;
        for (int val : flat) {
            ans += abs(val - median) / x;
        }

        return ans;
    }
};