class Solution {
private:
    const int MOD = 1e9+7;

    long long modPow(long long base, long long exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }

    vector<int> generate_powers(int n) {
        vector<int> ans;
        while (n > 0) {
            int log_of_2 = 31 - __builtin_clz(n); // fast highest set bit
            int powers_of_two = 1 << log_of_2;
            n -= powers_of_two;
            ans.push_back(powers_of_two);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    void multiplyPowers(vector<int> &powers) {
        for (int i = 1; i < (int)powers.size(); ++i) {
            powers[i] = (1LL * powers[i] * powers[i - 1]) % MOD;
        }
    }

    int get_product_of_range(vector<int> &prefix, int from, int to) {
        if (from == 0) return prefix[to];
        long long numerator = prefix[to];
        long long denominatorInv = modPow(prefix[from - 1], MOD - 2); // inverse mod
        return (numerator * denominatorInv) % MOD;
    }

public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int> powers = generate_powers(n);
        multiplyPowers(powers);

        vector<int> ans;
        for (auto &query : queries) {
            ans.push_back(get_product_of_range(powers, query[0], query[1]));
        }
        return ans;
    }
};
