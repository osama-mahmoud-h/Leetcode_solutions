class Solution {
public:
    vector<int> memo;
    
    int helper(vector<int>& nums,int prevVal,int curIdx){
       if(curIdx>=nums.size()){
          return 0;
        }
        
    int pick = 0, leave = 0;
        
        
    if(nums[curIdx]>prevVal){
        if(memo[curIdx]==-1){
             memo[curIdx] = 1 + helper(nums,nums[curIdx],curIdx+1);
        }
        pick = memo[curIdx];
    }
        
    leave = helper(nums,prevVal,curIdx+1);

    return max(pick,leave);
}
int lengthOfLIS(vector<int>& nums) {
    int n= nums.size();
    int OO = 1e5;
    memo = vector<int>(n,-1);
    
   int ans= helper(nums,-OO,0);
   
   
    
    return ans;
}
};