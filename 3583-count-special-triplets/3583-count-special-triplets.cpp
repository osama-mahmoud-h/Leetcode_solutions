class Solution {
private:
    inline void dec(unordered_map<int,int> &mp, int x) {
        if (--mp[x] == 0) mp.erase(x);
    }

public:
    int specialTriplets(vector<int>& nums) {
        const int mod = 1e9+7;
        int n = nums.size();
        
        unordered_map<int,int> prev_freq, next_freq;
        long long ans = 0;

        // next contains all elements from index 2..n-1
        for (int i = 2; i < n; ++i)
            next_freq[nums[i]]++;

        // prev contains element at index 0
        prev_freq[nums[0]]++;

        for (int j = 1; j < n-1; ++j) {
            long long target = nums[j] * 2LL;

            if (prev_freq.count(target) && next_freq.count(target)) {
                ans = (ans + (1LL * prev_freq[target] * next_freq[target]) % mod) % mod;
            }

            prev_freq[nums[j]]++;

            if (j + 1 < n)
                dec(next_freq, nums[j+1]);
        }

        return ans % mod;
    }
};
