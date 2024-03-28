class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int n = nums.size();
        int mx = 0;
        int low = 0, high = 0;

        for(int high = 0; high < n; high++) {
            map[nums[high]]++;
            while (map[nums[high]] > k) {
                map[nums[low]]--;
                low++;
            }
            mx = max(mx, high - low + 1);
        }
        return mx;
    }
};