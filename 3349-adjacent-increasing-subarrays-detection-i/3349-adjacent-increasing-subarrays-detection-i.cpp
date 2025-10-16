class Solution {

     int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int prevLen = 0, currLen = 1, ans = 1;

        for (int i = 1; i < n; ++i) {
            if (nums[i] > nums[i - 1]) {
                currLen++;
            } else {
                if (prevLen > 0)
                    ans = max(ans, min(prevLen, currLen));
                ans = max(ans, currLen / 2);
                prevLen = currLen;
                currLen = 1;
            }
        }

        // Handle the last segment
        if (prevLen > 0)
            ans = max(ans, min(prevLen, currLen));
        ans = max(ans, currLen / 2);

        return ans;
    }
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        return maxIncreasingSubarrays(nums) >= k;
    }
};
