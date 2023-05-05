class Solution {
private:
    vector<vector<int>> memo;
    int helper(string& s1, string& s2,int i,int j){
        int n = s1.length() ,  m = s2.length();
        if(i>=n){
            int sum = 0;
            for (int k = j; k < m; ++k) {
              sum+=s2[k];
            }
            return sum;
        }

        if(j>=m){
            int sum = 0;
            for (int k = i; k < n; ++k) {
                sum+=s1[k];
            }
            return sum;
        }
        
        if(memo[i][j]!=-1)
            return memo[i][j];

        int pick = 0;
        int leave = 0;
        if(s1[i]==s2[j]){
            return memo[i][j] =  helper(s1,s2,i+1,j+1);
        }

        pick = s1[i] + helper(s1,s2,i+1,j);
        leave = s2[j] + helper(s1,s2,i,j+1);

        return memo[i][j] = min(pick,leave);

    }
public:
    int minimumDeleteSum(string s1, string s2) {
        int n = s1.length() ,  m = s2.length();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        return helper(s1,s2,0,0);
    }
};