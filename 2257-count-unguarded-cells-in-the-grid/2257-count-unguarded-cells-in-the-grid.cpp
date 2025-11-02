class Solution {
private:
    void guard(vector<vector<int>>& mat, int m, int n, vector<int>& guard) {
        int i = guard[0], j = guard[1];

        // UP
        for (int x = i - 1; x >= 0; --x) {
            if (mat[x][j] == 2 || mat[x][j] == 1) break;  // wall or another guard blocks
            mat[x][j] = 3; // mark as watched
        }

        // DOWN
        for (int x = i + 1; x < m; ++x) {
            if (mat[x][j] == 2 || mat[x][j] == 1) break;
            mat[x][j] = 3;
        }

        // LEFT
        for (int y = j - 1; y >= 0; --y) {
            if (mat[i][y] == 2 || mat[i][y] == 1) break;
            mat[i][y] = 3;
        }

        // RIGHT
        for (int y = j + 1; y < n; ++y) {
            if (mat[i][y] == 2 || mat[i][y] == 1) break;
            mat[i][y] = 3;
        }
    }
    int countZeros(const vector<vector<int>>& mat, int m, int n) {
        int count = 0;
        for (const auto& row : mat)
            count += count_if(row.begin(), row.end(), [](int x){ return x == 0; });
        return count;
    }
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>mat(m,vector<int>(n,0));
        for (const auto &item: guards){
            mat[item[0]][item[1]] = 1;
        }
        for (const auto &item: walls)
            mat[item[0]][item[1]] = 2;

        for (auto &item: guards){
            guard(mat, m,n, item);
        }

        return countZeros(mat, m, n);
    }
};