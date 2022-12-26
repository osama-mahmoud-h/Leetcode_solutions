class Solution {
public:
    unordered_map<int,bool>memo;
    bool helper(vector<int>&nums,int i){
        if(memo.find(i)!=memo.end()){
            return memo[i];
        }
        if(i>=nums.size()-1){
            return 1;
        }
        if(nums[i]==0){
            return 0;
        }
        int choices = nums[i];
        for(int j=choices+i;j>=i+1;j--){
            if(helper(nums,j)){
                memo[i]=1;
                return 1;
            }
        }
        memo[i]=0;
        return 0;
    }
    bool canJump(vector<int>& nums) {
        return helper(nums,0);
    }
};