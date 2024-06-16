class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long sum = 1; // Use long long to avoid overflow
        int cnt = 0;
        int i = 0;

        while (sum <= n) {
            if (i < nums.size() && nums[i] <= sum) {
                // If the current number in nums can extend the range
                sum += nums[i];
                ++i;
            } else {
                // If the current number in nums cannot extend the range
                // Add sum itself as a patch to extend the range
                sum += sum;
                ++cnt;
            }
        }
        
        return cnt;
    }
};