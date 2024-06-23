class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>window;
        int ans = 1;

        for (int right = 0, left = 0; right < nums.size(); ++right) {
            window.insert(nums[right]);

            while(window.size() && (*window.rbegin() - *window.begin() >limit )){
                auto itemItr = window.find(nums[left]);
                window.erase(itemItr);
                ++left;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};