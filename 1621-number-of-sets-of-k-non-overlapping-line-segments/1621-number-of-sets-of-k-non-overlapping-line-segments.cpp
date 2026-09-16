class Solution {
private: 
    vector<vector<int>> memo;
    int mod = 1e9 + 7;
    long solve (long n ,long k){
        if(k == 1)
            return (n*(n-1)/2) % mod;
        if(memo[n][k] != -1)
            return memo[n][k];
        long ways = 0;
        for(int i=1;i<=n-k;i++)
            ways = (ways + i*solve(n-i,k-1))%mod;
        return memo[n][k] = ways;
    }
public:
    int numberOfSets(int n, int k) {
        memo = vector<vector<int>>(n+1 ,vector<int>(k+1 , -1));
        return solve (n, k);
    }
};