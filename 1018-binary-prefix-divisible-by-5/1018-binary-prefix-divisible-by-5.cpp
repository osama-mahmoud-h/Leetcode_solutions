class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<bool> ans(n, 0);
        for(int i = 0; i < n; i++){
            sum = (sum * 2 + nums[i])%5;
            ans[i] = !(bool)sum;
        }

        return ans;
    }
};