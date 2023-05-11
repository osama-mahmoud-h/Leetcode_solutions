
class Solution {
private:
    static bool cmp(vector<int>&v1,vector<int>&v2){
        if(v1[0]==v2[0])
            return v1[1]<v2[1];
        return v1[0]<v2[0];
    }
    vector<vector<int>>memo;
    int helper(vector<vector<int>>&ar,int idx,int prev){
        
        int n = ar.size();
       
        if(idx>=n){return 0;}// 1,2,3

        if(memo[idx][prev+1] !=-1){
            return memo[idx][prev+1];
        }

        int pick = 0;
        
        if(prev == -1 || ar[idx][0]>ar[prev][1])
            pick = 1 + helper(ar,idx+1,idx);

        int leave = helper(ar,idx+1,prev);

        return memo[idx][prev+1] =  max(pick,leave);
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        
        int n = pairs.size();
        
        sort(pairs.begin(),pairs.end(),cmp);
        
        memo = vector<vector<int>>(n,vector<int>(n+1,-1));
        
        return helper(pairs,0,-1);
    }
};