#define ll long long int
class Solution {
private:
    const int MOD = 1e9+7;
   
    ll modPow(ll base,ll exp, ll mod) {
        ll result = 1;
        base %= mod;
        while (exp > 0) {
              if (exp % 2 == 1)
                   result = (result * base) % mod;
                base = (base * base) % mod;
                exp /= 2;
        }
    return result;
}
public:
    int countGoodNumbers(long long n) {
       ll even_digits = ceil(n/2.0);
        ll odd_digits = n/2;
        
        ll count_even_ways = modPow(5, even_digits, MOD);
        ll count_odd_ways = modPow(4, odd_digits, MOD);

        return (count_even_ways * count_odd_ways) % MOD;
    }
};