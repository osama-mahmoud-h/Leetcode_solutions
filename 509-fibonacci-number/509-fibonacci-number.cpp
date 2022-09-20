class Solution {
public:
    int memo[31];
    
    int dfs(int n){
        if(memo[n]>=0)return memo[n];
        if(n<1)return 0;
        if(n==1)return 1;
        memo[n]= dfs(n-1)+dfs(n-2);
        return memo[n];
    }
    int fib(int n) {
        memset(memo,-1, sizeof(memo));
        return dfs(n);
    }
};