class Solution {
private:
    int memo[5001][4][4][4][4][4];

    enum Color { RED, GREEN, YELLOW, NONE };
    static constexpr Color colors[3] = { RED, GREEN, YELLOW };
    static constexpr int MOD = 1e9 + 7;

    int solve(int n, int row, int col, Color up0, Color up1, Color up2, Color left) {

        // finished all rows
        if (row == n) return 1;

        int &res = memo[row][col][up0][up1][up2][left];
        if (res != -1) return res;

        // finished current row -> move to next row
        if (col == 3) {
            return solve(n, row + 1, 0, up0, up1, up2, NONE);
        }

        long long ans = 0;
        for (Color c : colors) {
            // horizontal constraint
            if (c == left) continue;

            // vertical constraint
            if ((col == 0 && c == up0) ||
                (col == 1 && c == up1) ||
                (col == 2 && c == up2))
                continue;

            Color n0 = up0, n1 = up1, n2 = up2;
            if (col == 0) n0 = c;
            if (col == 1) n1 = c;
            if (col == 2) n2 = c;

            ans += solve(n, row, col + 1, n0, n1, n2, c);
        }

        return res = ans % MOD;
    }

public:
    int numOfWays(int n) {
        memset(memo, -1, sizeof(memo));
        return solve(n, 0, 0, NONE, NONE, NONE, NONE);
    }
};