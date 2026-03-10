class Solution {
public:
    static int dp[201][201][2][201];
    const int MOD = 1e9 + 7;

    int dfs(int z, int o, int last, int cnt, int limit) {
        if (z == 0 && o == 0) return 1;

        int &res = dp[z][o][last][cnt];
        if (res != -1) return res;

        long long ans = 0;

        if (z > 0) {
            if (last == 0) {
                if (cnt + 1 <= limit)
                    ans += dfs(z - 1, o, 0, cnt + 1, limit);
            } else {
                ans += dfs(z - 1, o, 0, 1, limit);
            }
        }

        if (o > 0) {
            if (last == 1) {
                if (cnt + 1 <= limit)
                    ans += dfs(z, o - 1, 1, cnt + 1, limit);
            } else {
                ans += dfs(z, o - 1, 1, 1, limit);
            }
        }

        return res = ans % MOD;
    }

    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp, -1, sizeof(dp));

        long long ans = 0;

        if (zero > 0) ans += dfs(zero - 1, one, 0, 1, limit);
        if (one > 0) ans += dfs(zero, one - 1, 1, 1, limit);

        return ans % MOD;
    }
};

int Solution::dp[201][201][2][201];
