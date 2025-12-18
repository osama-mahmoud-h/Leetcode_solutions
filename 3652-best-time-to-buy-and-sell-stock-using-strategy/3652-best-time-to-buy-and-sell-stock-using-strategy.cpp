
class Solution {
private:
    typedef long long ll;
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        ll ans = 0, m_sum = 0;
        int n = prices.size();
        for (int i = 0; i < n; ++i) {
            m_sum = ans += prices[i] * strategy[i];
        }

        for (int i = 0, j = k/2; i < k/2 ; ++i, ++j) { // modify [0 : k/2) => 0, [k/2: k) =>1
            m_sum += prices[j] - (prices[j] * strategy[j]); // set to 1
            m_sum -= (prices[i] * strategy[i]); // set = 0
        }
       /// cout<<"modified_sum = "<<m_sum<<"\n";
        ans = max(ans,m_sum);
        for (int i = k; i < n; ++i) {
            m_sum += prices[i] - prices[i - k/2] - (prices[i] * strategy[i])  ; // set to 1 and shrink up
            m_sum += (prices[i-k] * strategy[i-k]);
            cout<<"m_sum = "<<m_sum<<"\n";
           // ans = max(ans,m_sum);
        }

        return ans;
    }
};