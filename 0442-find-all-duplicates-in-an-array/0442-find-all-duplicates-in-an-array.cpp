class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for (const auto &item: nums){
            int idx = abs(item)-1;
            if(nums[idx]<0){
                ans.push_back(abs(item));
            }else{
                nums[idx] *= -1;
            }
        }
        return ans;
    }
};