class Solution {
public:
    vector<vector<int>> sum;
    void init(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        sum = vector<vector<int>>(m + 1, vector<int>(n + 1)); // sum[i][j] is sum of all elements inside the rectangle [0,0,i,j]
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + matrix[i - 1][j - 1];
            }
        }
    }
    int sumRegion(int r1, int c1, int r2, int c2) {
        r1++; c1++; r2++; c2++; // Since our `sum` starts by 1 so we need to increase r1, c1, r2, c2 by 1
        return sum[r2][c2] - sum[r2][c1 - 1] - sum[r1 - 1][c2] + sum[r1 - 1][c1 - 1];
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size() , m = matrix[0].size();
        int ans = 0;

        vector<vector<int>>mat(n,vector<int>(m,0));
        for (int i = 0; i <n ; ++i) {
            for (int j = 0; j < m; ++j) {
                mat[i][j] = matrix[i][j]-'0';
            }
        }
        init(mat);

        for (int k = 0; k<= min(n,m); k++)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if(i-k>=0 && j-k >=0){
                    int sum = sumRegion(i-k,j-k,i,j);
                    if(sum==(k+1)*(k+1))
                    ans = max(ans,sum);
                    //cout<<"i: "<<i<<" ,j: "<<j<<" , sum: "<<sum<<"\n";
                }
                
            }
        }
        
        return ans;
    }
};