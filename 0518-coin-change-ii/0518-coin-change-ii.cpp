class Solution {
public:
    int helper(vector<int>& coins,int amount,int i,vector<vector<int>>&memo){
        if(amount<0||i>=coins.size()){
            return 0;
        }
        if (amount==0){
            return 1;
        }
        if(memo[i][amount]!=-1){
            return memo[i][amount];
        }

          
         int pick=helper(coins,amount-coins[i],i,memo);
         int leave=helper(coins,amount,i+1,memo);
        memo[i][amount]=pick+leave;
        return pick+leave;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>memo(coins.size()+1,vector<int>(amount+1,-1));
        int res = helper(coins,amount,0,memo);
        return res;
    }
};

/*


int helper(vector<int>& coins,int amount,int i,vector<vector<int>>&memo){
        if(amount<0||i>=coins.size()){
            return OO;
        }
        if (amount==0){
            return 0;
        }
        if(memo[i][amount]!=-1){
            return memo[i][amount];
        }

          
         int pick=1+helper(coins,amount-coins[i],i,memo);
         int leave=helper(coins,amount,i+1,memo);
        memo[i][amount]=min(pick,leave);
        return min(pick,leave);
    }
    int coinChange(vector<int>& coins, int amount) {
        //sort(coins.rbegin(),coins.rend());
vector<vector<int>>memo(coins.size()+1,vector<int>(amount+1,-1));
int res = helper(coins,amount,0,memo);
        if(res>=OO)
            return -1;
        return res;
    } 
*/