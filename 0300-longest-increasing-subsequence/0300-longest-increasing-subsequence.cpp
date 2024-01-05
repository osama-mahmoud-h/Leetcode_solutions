class Solution {
private:
    int INF = 1e9;
    vector<vector<int>>memo;
    int helper(vector<int>&ar,int idx,int prev){
        int n = ar.size();
        if(idx>=n){return 0;}// 1,2,3
        //string key = to_string(idx)+"."+ to_string(prev);

        if(memo[idx][prev+1]!=-1){
            return memo[idx][prev+1];
        }
        int prev_val = prev == -1 ? -INF : ar[prev];
        int pick = 0, leave = 0;
        if(ar[idx]>prev_val)
            pick = 1 + helper(ar,idx+1,idx);

        leave = helper(ar,idx+1,prev);

        return memo[idx][prev+1] =  max(pick,leave);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
memo = vector<vector<int>>(nums.size(),vector<int>(nums.size()+1,-1));
        return helper(nums,0,-1);
    }
};