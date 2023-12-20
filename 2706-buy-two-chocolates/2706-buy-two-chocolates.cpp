class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        
        int reminder = money -prices[0]-prices[1];
        return reminder<0 ? money : reminder;
    }
};