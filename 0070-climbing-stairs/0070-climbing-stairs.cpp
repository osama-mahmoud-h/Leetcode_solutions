class Solution {
    private:
    vector<int>memo;
    int helper(int n){
        if(n <= 2)return n;
        cout<<n<<"\n";
        if(memo[n] != -1)
            return memo[n];
        return memo[n] = helper(n-1) + helper(n-2);
    }
public:
    int climbStairs(int n) {
        memo = vector<int>(n+1,-1);
        return helper(n);
    }
};