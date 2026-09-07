class Solution {
    vector<vector<int>> memo;
    int solver(string& s, string& t, int i ,int j){
        int n = s.length(), m = t.length();
        if(j >= m)
            return 1;
        if(i >= n )
            return 0;

        if (memo[i][j] != -1) return memo[i][j];
        
        int ways = 0;
        if(s[i] == t[j])
            ways += solver(s,t,i+1,j+1) +  solver(s,t,i+1,j);
        else 
            ways += solver(s,t,i+1,j);

        return memo[i][j] = ways;         
    }
public:
    int numDistinct(string s, string t) {
        int n = s.length(), m = t.length(); 
        memo =  vector<vector<int>>(n, vector<int>(m, -1));
        return solver(s, t, 0, 0);
    }
};