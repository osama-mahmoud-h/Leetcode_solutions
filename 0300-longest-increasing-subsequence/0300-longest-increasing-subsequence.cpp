
class Solution {
private:
    vector<vector<int>> memo;
    int helper(vector<int>&ar,int idx,int prev){
        int n = ar.size();
        if(idx>=n){return 0;}// 1,2,3

        if( memo[idx][prev+1] !=-1){
            return memo[idx][prev+1];
        }
        
        int pick = 0, leave = 0;
                
        if(prev == -1 or ar[idx]>ar[prev])
            pick = 1 + helper(ar,idx+1,idx);
        
        leave = helper(ar,idx+1,prev);

        return memo[idx][prev+1] =  max(pick,leave);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memo = vector<vector<int>>(n,vector<int>(n+1,-1));
        return helper(nums,0,-1);
    }
};