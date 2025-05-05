class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        int mul= 1e4;
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+(mul*(nums[nums[i]]%mul));
        }
        for(int i=0;i<n;i++){
            nums[i]/=mul;
        }
        return nums;
    }
};