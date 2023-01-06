class Solution{
private:

public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for (auto i:costs) {
            if(coins>=i){
                ans++;
                coins-=i;
            } else{ break;}
        }
        return ans;
    }

};