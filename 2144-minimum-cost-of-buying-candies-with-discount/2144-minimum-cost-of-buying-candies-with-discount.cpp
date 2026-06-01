class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if(n == 1){
            return cost[0];
        }
        sort(cost.begin(), cost.end());
        int ans = 0;
        for(int i = n-1; i>=0; i--){
                ans += cost[i] + (i <=0 ? 0 : cost[--i]);
                i--;
        }
        return ans;
    }
};