class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
       long long result = 0;
        long long windowSum = 0;
        int low = 0;

        for (int high = 0; high < nums.size(); ++high) {
            windowSum += nums[high];

            while (windowSum * (high - low + 1) >= k) {
                windowSum -= nums[low];
                low++;
            }

            result += (high - low + 1);
        }

        return result;
    }
};