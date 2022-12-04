class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
    int cnt = 0;
    int prod = 1;
    int low = 0,high = 0;
        
    for (low = 0,high=0; high < nums.size(); ++high) {
       
        prod*=nums[high];
        
          while (prod>=k){
                 prod/=nums[low++];
          }
        
           cnt+= high-low+1;
    }
        

    return cnt;
    }
};