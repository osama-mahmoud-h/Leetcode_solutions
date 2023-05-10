class Solution {
private:
    void helper(vector<vector<int>>&ar,int r1,int c1,int r2,int c2, int &cnt){
        if(r2<r1 || c2<c1){
            return;
        }
        
        // fill right
        for (int i = c1; i <= c2; ++i) {
            ar[r1][i] = ++cnt;
        }
        // fill down
        for (int i = r1+1; i <=r2 ; ++i) {
            ar[i][c2] = ++cnt;
        }
        
        // fill bottom left 
        for (int i = c2-1; i >=c1 ; --i) {
            ar[r2][i] = ++cnt;
        }
        
        //fill up left
        for (int i = r2-1; i >r1 ; --i) {
            ar[i][c1] = ++cnt;
        }

        helper(ar,r1+1,c1+1,r2-1,c2-1,cnt);
    }
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int cnt = 0;
        helper(ans,0,0,n-1,n-1,cnt);
        return ans;
    }
};