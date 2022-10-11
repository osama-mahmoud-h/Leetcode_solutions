class Solution {
public:
      vector<vector<vector<int>>> memo;
int helper(vector<int>& nums, int target,int i,int sum,bool takeIt){

    if(i>=nums.size()||sum>target){
        return 0;
    }
    if(sum==target){
        return 1;
    }
    if(memo[i][sum][takeIt]!=-1){
        return memo[i][sum][takeIt];
    }
    if(takeIt){
        int summ = 0;
        for (auto x:nums) {
            summ +=  helper(nums,target,i,sum+x, 1);
        }
        return memo[i][sum][takeIt] = summ;
    }

    int pick = helper(nums,target,i+1,sum+nums[i], 1);
    int leave =  helper(nums,target,i+1,nums[i], 0);
    
    return memo[i][sum][takeIt] = pick + leave;
}
int combinationSum4(vector<int>& nums, int target) {
    int n=nums.size();
    memo = vector<vector<vector<int>>>(n,vector<vector<int>>(target+1,vector<int>(2,-1)));
   
    return helper(nums,target,0,0, 1);
}
};