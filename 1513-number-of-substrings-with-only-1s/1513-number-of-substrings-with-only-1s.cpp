class Solution {
public:
    int numSub(string s) {
        int MOD = 1e9 + 7;
        int ans = 0;
        int n = s.length();
        for(int i = 0;i<n; i++){
            int cnt = 0;
            while(i<n and s[i]=='1'){
                ++cnt;
                ans = ((ans % MOD) + cnt) % MOD;
                i++; 
            }
            i -= cnt>0 ? 1 : 0;
        }
        return ans;
    }
};