class Solution {
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        for( ;i<nums.size(); i++){
            if(!nums[i]){
                k--;
                //j++;
            }
            
            if(k<0){
                if(!nums[j])
                    k++;
                j++;
            }
            
          
        }
        int ans = i - j;
        return k < 1 ? --ans : ans;
    }
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = longestOnes(nums, 1);
       return  ans==n ? n-1 : ans;
    }
};