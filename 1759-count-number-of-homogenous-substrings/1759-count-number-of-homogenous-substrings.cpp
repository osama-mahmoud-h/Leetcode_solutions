class Solution {
public:
    int countHomogenous(string s) {
        int MOD=1e9 + 7, j=0, ans = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if(i==0||s[i]==s[i-1])
                j++;
            else
                j=1;
            ans = (ans+j)%MOD;
        }
        return ans;
    }
};
