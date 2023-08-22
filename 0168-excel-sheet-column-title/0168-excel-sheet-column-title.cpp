class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        while(n--){
            char c = 'A' + (n%26);
            ans += c ;
            n /= 26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

/*
28%26 = 2 
*/