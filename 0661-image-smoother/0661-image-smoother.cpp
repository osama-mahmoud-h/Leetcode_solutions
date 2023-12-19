
class Solution {
private:
    bool isValidCell(int i,int j,int n,int m){
        return i>=0 and i<n and j>=0 and j<m;
    };
    int countSurrounding(int i,int j,int n,int m){
        int cnt = 0;
        for (int k = i-1; k <= i+1; ++k) {
            for (int l = j-1; l <= j+1; ++l) {
                if(isValidCell(k,l,n,m)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
    int sumSurrounding(vector<vector<int>>& ar,int i,int j){
        int n = ar.size();
        int m = ar[0].size();
        int cnt = 0;
        for (int k = i-1; k <= i+1; ++k) {
            for (int l = j-1; l <= j+1; ++l) {
                if(isValidCell(k,l,n,m)){
                    cnt+=ar[k][l];
                }
            }
        }
        return cnt;
    }
    
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int count = countSurrounding(i,j,n,m);
                int sum = sumSurrounding(img,i,j);
                ans[i][j] = sum/count;
            }
        }
        return ans;
    }
};