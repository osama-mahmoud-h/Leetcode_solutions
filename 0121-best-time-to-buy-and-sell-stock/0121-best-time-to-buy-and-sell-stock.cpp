class Solution {
private:
    const static int N = 1e5;
    int memo[N][3];

    int OO = 1e7;
    int recur(int idx ,int take,vector<int>&ar){
        if(take==2){
            return 0;
        }
        if(idx>=ar.size()){
            return -OO;
        }
        if(memo[idx][take]!=-1){
            return memo[idx][take];
        }
        int pick = 0;
        if(take==0)
            pick = -ar[idx] + recur(idx+1,take+1,ar);
        else
            pick = ar[idx] + recur(idx+1,take+1,ar);

        int leave = recur(idx+1,take,ar);
        
        memo[idx][take] = max(pick,leave);
        return max(pick,leave);
    }
public:

    int maxProfit(vector<int>& prices) {
        memset(memo, -1, sizeof(memo));
        int ans = recur(0,0,prices);
        return ans<0?0:ans;
    }
};
