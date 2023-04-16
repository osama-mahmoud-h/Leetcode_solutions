
class Solution {
private:
    vector<vector<int>>memo;
    bool helper(string &s, int l,int h,vector<int>&ans){
        //empty or one element is considered palindrome
        if(l>=h){
            return 1;
        }

        if(memo[l][h]!=-1){
            return memo[l][h];
        }

        int found = 0 ;
        if(s[l]==s[h]){
            found = helper(s, l+1, h-1, ans);
        }
        
        //try two possible way
        helper(s, l+1, h, ans);
        helper(s, l, h-1, ans);
        
        if (found && (h-l+1)>ans[2]){
            ans = {l,h,h-l+1};
        }
       

        return memo[l][h] =found;
    }
public:
        string longestPalindrome(string s) {
            int n = s.length();
            memo = vector<vector<int>>(n,vector<int>(n,-1));
            vector<int>ans = {0,0,1}; //{l,h,h-l+1};
            helper(s,0,n-1,ans);
            return s.substr(ans[0],ans[2]);
        }
    
};
