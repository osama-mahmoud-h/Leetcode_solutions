class Solution {
    long long int OO = -10e8;
    int recur(vector<int>& nums,int i,bool takeIt,vector<vector<int>>&memo){

        if(i>=nums.size()){
           return takeIt ? 0 : -10e8; 
        }
        if(memo[i][takeIt]!=-1){
            return memo[i][takeIt];
        }
        if(takeIt){
            memo[i][takeIt]=max(0,nums[i]+recur(nums,i+1,1,memo));
            return  memo[i][takeIt];
        }
        
        int take = nums[i]+recur(nums,i+1,1,memo) ;
        int notTake = recur(nums,i+1,0,memo); 
        memo[i][takeIt]=max(take,notTake);
        return max(take,notTake);
    }
    public:
    int maxSubArray(vector<int>& nums) {
        vector<vector<int>>memo(nums.size(),vector<int>(2,-1));
        return recur(nums,0,0,memo);
    }
};