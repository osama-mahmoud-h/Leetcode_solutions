class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int>seen;
        int n = (int)nums.size();
        
        for (int i = n - 1; i >= 0 ; --i) {
            if(seen.find(nums[i]) != seen.end()){
                return ceil((i+1)/3.0) ;
            }
            seen.insert(nums[i]);
        }
        return 0;
    }
};