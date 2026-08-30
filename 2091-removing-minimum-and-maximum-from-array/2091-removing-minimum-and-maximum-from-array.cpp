class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_idx = std::min_element(nums.begin(), nums.end()) - nums.begin();
        int max_idx = std::max_element(nums.begin(), nums.end()) - nums.begin();
        int n = nums.size();
        return min({ 
            (min(min_idx, max_idx) + 1 + n - max(max_idx, min_idx)) , 
            (max(max_idx, min_idx)+1) , 
            (n - min(min_idx, max_idx)) 
        });
    }
};