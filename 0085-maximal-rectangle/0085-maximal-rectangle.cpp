class Solution {
private:
    void print2DVector(vector<vector<int>>& v) {
        // Print the 2D vector with formatted output
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[i].size(); j++) {
                cout << setw(4) << v[i][j];
            }
            cout << endl;
        }
    }
    int get_max_area( vector<int> &rec){
        sort(rec.rbegin(), rec.rend());
        int mx = 0;
        for (int i = 0; i < rec.size(); ++i) {
            mx = max(mx, rec[i] * (i+1));
        }
        return mx;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int ans = 0;

        vector<vector<int>> sums(n, vector<int>(m, 0));

        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                int sum = 0;
                while(j < m and matrix[i][j] == '1'){
                    sum++;
                    sums[i][j++] = sum;
                }
            }
        }
       // print2DVector(sums);

        for (int j = 0; j < m; ++j){
            vector<int>rec;
            for (int i = 0; i < n; ++i) {
                vector<int>rec;
                while(i < n and sums[i][j] > 0){
                    rec.push_back(sums[i][j]);
                    i++;
                }
                ans = max(ans, get_max_area(rec));
            }
        }

        return ans;
    }
};