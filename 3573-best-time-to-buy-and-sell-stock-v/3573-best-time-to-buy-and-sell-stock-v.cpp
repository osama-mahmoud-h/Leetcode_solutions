class Solution {
private:
    typedef long long int ll;
    enum State {SELL, BUY, NONE };
    vector<vector<vector<ll>>> memo;
    ll solve(vector<int>& prices, int idx, int k, State state){
        if(idx >= prices.size() ){
            return state == NONE ? 0 : LLONG_MIN/2;
        }
        if(memo[idx][k][state] != LLONG_MIN)
            return memo[idx][k][state];
        ll ans = solve(prices, idx+1, k, state);
        ll current_price = prices[idx];

        if(state == NONE && k > 0){
            ans = max(ans, solve(prices, idx + 1, k, BUY) - current_price);
            ans = max(ans, solve(prices, idx + 1, k, SELL) + current_price);
        } else if (state == BUY) {
            ans = max(ans, solve(prices, idx + 1, k - 1, NONE) + current_price);
        }
        else if (state == SELL) {
            ans = max(ans, solve(prices, idx + 1, k - 1, NONE) - current_price);
        }
        return memo[idx][k][state] = ans;
    }
public:
    long long maximumProfit(vector<int>& prices, int k) {
        int n = prices.size();
        memo.assign(n, vector<vector<ll>>(k+1, vector<ll>(3, LLONG_MIN)));
        return solve(prices, 0, k, NONE);
    }
};