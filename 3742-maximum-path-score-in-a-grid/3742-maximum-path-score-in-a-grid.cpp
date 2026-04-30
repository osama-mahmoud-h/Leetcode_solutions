class Solution {
    int inf = 1e9;
    vector<vector<vector<int>>> dp;

    int solve(vector<vector<int>>& grid, int i, int j, int k) {
        int n = grid.size(), m = grid[0].size();

        if (i >= n || j >= m) return -inf;

        int cost = (grid[i][j] == 0 ? 0 : 1);
        int score = grid[i][j];

        if (k < cost) return -inf;

        if (i == n - 1 && j == m - 1) {
            return score;
        }

        int &res = dp[i][j][k];
        if (res != -1) return res;

        int down = solve(grid, i + 1, j, k - cost);
        int right = solve(grid, i, j + 1, k - cost);

        int best = max(down, right);

        if (best == -inf) return res = -inf;

        return res = score + best;
    }

public:
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();

        dp = vector<vector<vector<int>>>(
            n, vector<vector<int>>(m, vector<int>(k + 1, -1))
        );

        int res = solve(grid, 0, 0, k);
        return res < 0 ? -1 : res;
    }
};