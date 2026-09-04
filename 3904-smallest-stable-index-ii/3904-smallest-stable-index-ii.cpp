class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        multiset<int> l;

        for (const auto &i: nums){
            l.insert(i);
        }

        int n = nums.size(), mx = 0, ans = 0;

        for (int i = 0; i < n; ++i) {
            mx = max(nums[i], mx);
            if(mx - *l.begin() <= k){
                return i;
            }

            auto it = l.find(nums[i]);
            if (it != l.end()) {
                l.erase(it); 
            }

        }
        return -1;
    }
};