
class Solution {
private:
    vector<vector<int>>memo;
    int OO = 1e9;
    int helper(vector<int>&ar,int idx ,bool buy){
        int n = ar.size();
        if(idx>=n){
           // cout<<buy<<"\n";
            if(buy)return 0;
            return -OO;
        }
        if(memo[idx][buy]!=-1){return memo[idx][buy];}

        int pick = 0, leave = 0;

        if(buy)
            pick = -ar[idx]+ helper(ar,idx+1,!buy);
        else
            pick+=ar[idx]+max(0,helper(ar,idx+1,!buy));

        leave = helper(ar,idx+1,buy);

        return memo[idx][buy] = max(pick,leave);
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        memo = vector<vector<int>>(n,vector<int>(2,-1));
        return helper(prices,0,1);
    }
};