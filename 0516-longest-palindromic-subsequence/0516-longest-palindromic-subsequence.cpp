
class Solution {
private:
    vector<vector<int>>memo;
    int helper(string &s, int l,int h){
        if(l>h){
            return 0;
        }
        if (l==h)return 1;
        
        if(memo[l][h]!=-1){
            return memo[l][h];
        }
        
        int pick = 0 , left = 0,right = 0;
        if(s[l]==s[h]){
            pick = 2 + helper(s,l+1,h-1);
        }else{
            left = helper(s,l+1,h);
            right = helper(s,l,h-1);
        }
         
        return memo[l][h] = max({pick,left,right});
    }
public:
        int longestPalindromeSubseq(string s) {
        int n = s.length();
        memo = vector<vector<int>>(n,vector<int>(n,-1));
            return helper(s,0,n-1);
        }
};
