class Solution {
public:
    vector<vector<int>> memo;
    
    int helper(vector<int>& nums,int prevVal,int prevIdx,int curIdx){
       if(curIdx>=nums.size()){
          return 0;
        }
        
    int pick = 0, leave = 0;
        
     if(memo[prevIdx+1][curIdx]!=-1){
         return memo[prevIdx+1][curIdx] ;
     } 
        
    if(nums[curIdx]>prevVal){
       pick = 1 + helper(nums,nums[curIdx],curIdx,curIdx+1);
    }
        
    leave = helper(nums,prevVal,prevIdx,curIdx+1);

    return memo[prevIdx+1][curIdx]= max(pick,leave);
}
int lengthOfLIS(vector<int>& nums) {
    int n= nums.size();
    int OO = 1e5;
    memo = vector<vector<int>>(n+1,vector<int>(n,-1));
   return helper(nums,-OO,-1,0);
}
};