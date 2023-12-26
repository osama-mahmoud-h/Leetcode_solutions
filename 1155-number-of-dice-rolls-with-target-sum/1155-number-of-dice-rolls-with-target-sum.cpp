class Solution {
private:
    int MOD = 1e9 + 7;
    vector<vector<int>>memo;
    int helper(int st,int n,int k,int &traget){
        if(n<=0){
            return st==traget ? 1 : 0;
        }
        if(memo[n][st]!=-1){
            return memo[n][st];
        }

        int ans = 0;
        for (int i = 1; i <=k ; ++i) {
            ans = (ans%MOD + helper(st+i,n-1,k,traget) % MOD)%MOD;
        }
        memo [n][st] = ans;
        return ans;
    }
public:
    int numRollsToTarget(int n, int k, int target) {
        memo = vector<vector<int>>(n+1,vector<int>(k*n+1,-1));
        return helper(0,n,k,target);
    }
};
