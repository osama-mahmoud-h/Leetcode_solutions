class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long int ans = 0, imax = 0, dmax = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            ans = max(ans, dmax * 1L*nums[i]);
            dmax = max(dmax, imax-nums[i]);
            imax = max(imax, (long long int)(nums[i]));
        }
        return ans;
    }
};