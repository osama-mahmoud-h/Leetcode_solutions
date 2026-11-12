class Solution {
private:
    int longestStrictlyChanging(vector<int>& nums, bool inc ){
        int ans = 0, n = nums.size();
        int neg = inc ? 1 : -1;
        for (int i = 0; i < n-1; ++i) {
            int cnt = 0;
            while(i<n-1 and (nums[i] * neg) > (nums[i+1]*neg) ){
                i++;
                cnt++;
            }
            ans = max(ans, ++cnt);
        }
        return n==1 ? 1 : ans;
    }
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        return max(longestStrictlyChanging(nums,0), longestStrictlyChanging(nums,1));
    }
};