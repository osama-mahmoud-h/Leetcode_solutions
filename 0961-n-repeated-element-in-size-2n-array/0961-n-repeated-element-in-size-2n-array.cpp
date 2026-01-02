class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        sort(nums.begin(), nums.end());

        return nums[n-1] == nums[n-2] ? nums[n-1] : (nums[n] == nums[n+1] ? nums[n] : -1);
    }
};