class Solution {
private:
    typedef long long int ll;
    int comma_num(ll n){
        int cnt = 0;
        while(n){
            n /= 10;
            cnt++;
        }
        return (cnt - 1) / 3;
    }
public:
    long long countCommas(long long n) {
        ll ans = 0;

        int commas = comma_num(n) ,base = 1e3;
        for (int i = commas; i > 0 ; --i) {
            ll diff = n - ((ll)pow(base, commas) - 1);
            n -= diff;
            ans += diff * (commas--);
        }
        return ans;
    }
};