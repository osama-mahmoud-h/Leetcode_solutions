class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, n= nums.size();
        
        for (int j = 0; j < n; ++j) {
            if(nums[j]==val){
                continue;
            }
            nums[i++] = nums[j];
        }
        
        return i;
    }
};