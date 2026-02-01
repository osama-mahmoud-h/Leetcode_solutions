class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1, nums.end());
        return accumulate(nums.begin(), nums.begin()+3, 0);
    }
};