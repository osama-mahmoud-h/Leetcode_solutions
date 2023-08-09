class Solution {
vector<vector<int>>memo;
private:
    int helper(string &w1,string &w2,int i,int j){
        int n = w1.length(), m = w2.length();
        if(i>=n){
            return (m-j);
        }
        if(j>=m){
            return n-i;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        if(w1[i]==w2[j]){
            return memo[i][j] = helper(w1,w2,i+1,j+1);
        }
        int rem1 = 1 + helper(w1,w2,i+1,j);
        int rem2 = 1 + helper(w1,w2,i,j+1);
        return memo[i][j] = min(rem1,rem2);
    }
public:
    int minDistance(string w1, string w2) {
        int n = w1.length(), m = w2.length();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(w1,w2,0,0);
    }
};