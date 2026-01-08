class Solution {
private:
    vector<vector<int>> memo;
    int n, m;

    int solve(vector<int>& nums1, vector<int>& nums2, int i, int j) {
        if (i == n || j == m)
            return INT_MIN; // no valid non-empty subsequence
            
        auto &res = memo[i][j];
        if (res != INT_MIN)
            return res;

        // fist take nums1[i] and nums2[j] as a new start
        int pick = nums1[i] * nums2[j];

        // way1 : extend an existing subsequence
        int next = solve(nums1, nums2, i + 1, j + 1);
        if (next != INT_MIN)
            pick = max(pick, nums1[i] * nums2[j] + next);

        // way2 : skip nums1[i]
        int skip1 = solve(nums1, nums2, i + 1, j);

        // way3: skip nums2[j]
        int skip2 = solve(nums1, nums2, i, j + 1);

        return res = max({pick, skip1, skip2});
    }

public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        n = nums1.size();
        m = nums2.size();
        memo.assign(n, vector<int>(m, INT_MIN));
        return solve(nums1, nums2, 0, 0);
    }
};