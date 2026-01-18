
class Solution {
private:
    struct Cell {
        long long row, col, diag, anti;
    };

    vector<vector<Cell>> buildPrefix(const vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<Cell>> ps(m, vector<Cell>(n));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                long long v = grid[i][j];

                ps[i][j].row  = v + (j > 0 ? ps[i][j - 1].row : 0);
                ps[i][j].col  = v + (i > 0 ? ps[i - 1][j].col : 0);
                ps[i][j].diag = v + (i > 0 && j > 0 ? ps[i - 1][j - 1].diag : 0);
                ps[i][j].anti = v + (i > 0 && j + 1 < n ? ps[i - 1][j + 1].anti : 0);
            }
        }
        return ps;
    }

    bool isMagic(const vector<vector<Cell>>& ps, int i, int j, int k) {
        int top = i - k + 1;
        int left = j - k + 1;
        int n = ps[0].size();

        long long target =
                ps[i][j].row - (left > 0 ? ps[i][left - 1].row : 0);

        // Check rows
        for (int r = top; r <= i; r++) {
            long long sum =
                    ps[r][j].row - (left > 0 ? ps[r][left - 1].row : 0);
            if (sum != target) return false;
        }

        // Check columns
        for (int c = left; c <= j; c++) {
            long long sum =
                    ps[i][c].col - (top > 0 ? ps[top - 1][c].col : 0);
            if (sum != target) return false;
        }

        // Main diagonal
        long long diag =
                ps[i][j].diag -
                (top > 0 && left > 0 ? ps[top - 1][left - 1].diag : 0);
        if (diag != target) return false;

        // Semi-diagonal
        long long anti =
                ps[i][left].anti -
                (top > 0 && j + 1 < n ? ps[top - 1][j + 1].anti : 0);
        if (anti != target) return false;

        return true;
    }

public:
    int largestMagicSquare(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        auto ps = buildPrefix(grid);

        int maxK = min(m, n);

        for (int k = maxK; k >= 2; k--) {
            for (int i = k - 1; i < m; i++) {
                for (int j = k - 1; j < n; j++) {
                    if (isMagic(ps, i, j, k))
                        return k;
                }
            }
        }
        return 1; 
    }
};
