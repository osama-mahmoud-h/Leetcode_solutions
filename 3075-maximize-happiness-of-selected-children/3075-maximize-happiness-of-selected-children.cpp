class Solution {
private:
    using ll = long long;
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        ll ans = 0;
        int cnt = 0, n = happiness.size();
        sort(happiness.rbegin(), happiness.rend());

        while (cnt < n and k-- > 0){
            ans += max(0, happiness[cnt] - cnt);
            cnt++;
        }
        return ans;
    }
};