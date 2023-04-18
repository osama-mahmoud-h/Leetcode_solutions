
class Solution {
private:
    vector<vector<int>>memo;
    int OO = 1e9;
    int helper(vector<int>&ar,int idx ,int buy){
        int n = ar.size();
        if(idx>=n){
           // cout<<buy<<"\n";
            if(buy==1)return 0;
            return -OO;
        }
        if(memo[idx][buy]!=-1){return memo[idx][buy];}

        int pick = 0, leave = 0;
        
        if(buy==1)
            pick = -ar[idx] + helper(ar,idx+1,0);
        else if(buy==0)
            pick += ar[idx] + max(0,helper(ar,idx+1,2));//cooldown
        else //cooldown
            pick = 0 + helper(ar,idx+1,1);

        leave = helper(ar,idx+1,buy);

        return memo[idx][buy] = max(pick,leave);
    }
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        memo = vector<vector<int>>(n,vector<int>(3,-1));
        return helper(prices,0,1);
    }
};