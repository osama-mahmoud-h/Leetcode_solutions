class Solution {
private:
    int mod = 1e9 + 7;
    typedef long long int ll;
public:
    int numberOfWays(string corridor) {
        int sum_seats = accumulate(corridor.begin(), corridor.end(),0,[&](int sum ,char c){
            return sum + (c == 'S');
        });
        if(sum_seats%2 != 0)
            return 0;
        ll ans = 1;
        
        int n = corridor.size(), prev_s_sum = 0;

        for(int i = 0; i < n; ){
            char cur = corridor[i];
            int sum = 0;
            while(i < n and cur == corridor[i]){
                sum++, i++;
            }
            if(cur == 'P'){
                if(prev_s_sum%2 == 0 and prev_s_sum > 0){
                    ans = ((ans%mod) * (sum + 1))%mod;
                }
            }
            //cout<<"cur: "<<cur<<", prev_s_sum: "<<prev_s_sum<<"\n";
            prev_s_sum = sum;
        }
        return ans % mod;
    }
};