class Solution {
private:
    vector<vector<vector<int>>>memo;
    int helper(vector<int>&ar,int idx,int prev,bool is_nig) {
        int n = ar.size();
        if(idx>=n)return 0;
        
        if(memo[idx][prev+1][is_nig]!=-1){
            return memo[idx][prev+1][is_nig];
        }
        int pickUp = 0 ,pickDown = 0 ,leave = 0;
        if(prev == -1 ||(ar[idx] > ar[prev]) and is_nig)
            pickUp = 1 + helper(ar,idx+1,idx,0);

        if(prev == -1 ||(ar[idx] < ar[prev]) and !is_nig)
            pickDown = 1 + helper(ar,idx+1,idx,1);

        leave =  helper(ar,idx+1,prev,is_nig);

        return memo[idx][prev+1][is_nig] = max({pickDown,pickUp,leave});
    }
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        memo = vector<vector<vector<int>>>(n,vector<vector<int>>(n+1,vector<int>(2,-1)));
        return helper(nums,0,-1,1);
    }
};