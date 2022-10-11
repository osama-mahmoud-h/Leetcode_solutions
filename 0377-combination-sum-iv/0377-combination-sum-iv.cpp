class Solution {
public:
   unordered_map<string,int>memo;
int helper(vector<int>& nums, int target,int i,int sum,bool takeIt){

    if(i>=nums.size()||sum>target){
        return 0;
    }
    if(sum==target){
        return 1;
    }
    string k = to_string(nums[i])+"_"+ to_string(takeIt)+"_"+ to_string(sum);
    if(memo.find(k)!=memo.end()){
        return memo[k];
    }
    if(takeIt){
        int summ = 0;
        for (auto x:nums) {
            summ +=  helper(nums,target,i,sum+x, true);
        }
        return memo[k] = summ;
    }

    int take = helper(nums,target,i+1,sum+nums[i], true);
    int notTake =  helper(nums,target,i+1,nums[i], false);
    return memo[k] = take + notTake;
}
int combinationSum4(vector<int>& nums, int target) {
    return helper(nums,target,0,0, true);
}
};