class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int sum = 0;
    int length = 1e9+7;
    int low = 0,h=0;
    for ( ; h < nums.size(); ++h) {
        sum+=nums[h];
        while ((sum-nums[low])>=target){
            sum-=nums[low++];
        }
        if(sum>=target){
            length = min(length,h-low+1);
        }
    }
    return length == 1e9+7 ? 0 : length;
    }
};