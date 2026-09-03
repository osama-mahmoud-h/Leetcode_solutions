class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int minOdd = INT_MAX;

        for (int x : nums) {
            if (x % 2)
                minOdd = min(minOdd, x);
        }

        // Already all even
        if (minOdd == INT_MAX)
            return true;

        // Try to make everything odd.
        for (int x : nums) {
            if (x % 2 == 0 && x <= minOdd)
                return false;
        }

        return true;
    }
};