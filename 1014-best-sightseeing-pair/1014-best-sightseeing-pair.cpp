class Solution {
    vector<vector<int>> memo;
    int OO = -1e6;
    int helper(int idx,int take,vector<int>&ar){
        if(take==2){
            return 0;
        }
        if(idx>=ar.size()){return OO;}
        
        if(memo[idx][take]!=-1){
            return memo[idx][take];
        }
        int pick = ar[idx]+helper(idx+1,take+1,ar);
        int leave = helper(idx+1,take,ar);
        
        
        if(take==1){
            pick-=idx;
        }
        else{
            pick+=idx;
        }
        
        memo[idx][take] = max(pick,leave);
        return max(pick,leave);
        
    }
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n= values.size();
        memo = vector<vector<int>>(n+1,vector<int>(3,-1));
        return helper(0,0,values);
    }
};