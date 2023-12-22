class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int ans = 0;
        
        int ones = 0, zeros = 0;
        for(auto const &c : s){
            ones += c-'0';
        }
        
        for(int i=0;i<n-1;i++){
            char c = s[i];
            ones -= c-'0';
            zeros += !(c-'0');
            ans = max(ans,ones+zeros);

        }
       
        return ans;
  
    }
};