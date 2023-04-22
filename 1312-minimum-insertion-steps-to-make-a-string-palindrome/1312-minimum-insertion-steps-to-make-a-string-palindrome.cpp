class Solution {
private:
    vector<vector<int>>memo;
    int helper(string &ar,int l,int h){
        int n = ar.length();
        if(h<l){return 0;}

        if( memo[l][h] !=-1){
            return memo[l][h];
        }
        if(ar[l] == ar[h]){
            return helper(ar,l+1,h-1);
        }

        return  memo[l][h] =  1 + min(helper(ar,l,h-1),helper(ar,l+1,h));
    }
public:
    int minInsertions(string s) {
        int n = s.length();
        memo = vector<vector<int>>(n,vector<int>(n,-1));
        return helper(s,0,n-1);
    }
};