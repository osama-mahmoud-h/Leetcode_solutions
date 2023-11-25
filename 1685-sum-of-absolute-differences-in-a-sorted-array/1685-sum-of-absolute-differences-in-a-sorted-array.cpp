class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(n);

        for (int i = 1; i < n; ++i) {
            nums[i] += nums[i-1];
        }
        for (int i = 0; i < n; ++i) {
            int leftSum = 0, rightSum = 0;
            int num = nums[i]-(i-1<0 ? 0 : nums[i-1]);
            
            leftSum = (i-1<0 ? 0 : nums[i-1]);
            rightSum = nums[n-1] - nums[i];
            
            int leftNums = i;
            int rightNums = n - 1 - i;
            ans[i] = abs(num*leftNums - leftSum) + abs(num*rightNums - rightSum);

        }
        return ans;
    }
};