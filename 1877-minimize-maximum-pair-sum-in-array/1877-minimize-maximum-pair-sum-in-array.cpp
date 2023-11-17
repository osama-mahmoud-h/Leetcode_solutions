class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        int l = 0, h = nums.size()-1;
        while(l<=h){
            ans = max(ans,nums[l++] + nums[h--]);
        }
        return ans;
    }
};