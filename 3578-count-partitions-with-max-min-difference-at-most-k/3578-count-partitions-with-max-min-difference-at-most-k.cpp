class Solution {
    int dp[50001] = {1}, mod = 1e9 + 7;
public:
    int countPartitions(vector<int>& nums, int k) {
        long long window_sum = 0;
        multiset<int> ms;
        for (int i = 0, j = 0; i < nums.size(); ++i) {
            window_sum = (window_sum + dp[i]) % mod;
           // cout<<"i: "<<i<<" - "<<window_sum<<"\n";
            ms.insert(nums[i]);
            while (*prev(end(ms)) - *begin(ms) > k) {
                window_sum = (mod + window_sum - dp[j]) % mod;
                ms.erase(ms.find(nums[j++]));
            }
            dp[i + 1] = window_sum;
        }
        return dp[nums.size()];
    }
};