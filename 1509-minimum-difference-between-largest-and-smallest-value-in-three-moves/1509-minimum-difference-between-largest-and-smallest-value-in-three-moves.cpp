class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n<=4)
            return 0;
        
        sort(nums.begin(),nums.end());
        
        int right = n - 1, ans = INT_MAX;
        for (int i = 3; i >=0 ; --i) {
            ans = min(ans, nums[right--] - nums[i]);
        }
        return ans;
    }
};