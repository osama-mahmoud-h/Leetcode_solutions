class Solution {
private:
    vector<vector<int>>memo;
    int helper(vector<vector<int>>&ar,int i,int j){
        int n = ar.size() , m=  ar[0].size();
        if(i<0 || i>=n || j<0 || j>=m){
            return 0;
        }
        if(memo[i][j]!=-1){
            return memo[i][j];
        }
        int lowDiagonal = (i-1 >=0 &&j+1<m && ar[i][j]<ar[i-1][j+1]) ? 1+helper(ar,i-1,j+1) : 0;
        int highDiagonal = (i+1 <n && j+1<m &&ar[i][j]<ar[i+1][j+1] ) ? 1+helper(ar,i+1,j+1) : 0;
        int forward = ( j+1<m && ar[i][j]<ar[i][j+1]) ? 1+helper(ar,i,j+1) : 0;
        
        return memo[i][j] = max({lowDiagonal,highDiagonal,forward});
    }
public:
    int maxMoves(vector<vector<int>>& ar) {
        int n = ar.size() , m = ar[0].size();
        memo = vector<vector<int>>(n,vector<int>(m,-1));
        int ans = 0;

        for (int i = 0; i < n; ++i) {
            ans = max(ans, helper(ar,i,0));
        }
        return ans;
    }
};
