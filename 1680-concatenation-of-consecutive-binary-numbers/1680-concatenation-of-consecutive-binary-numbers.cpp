#include <bit>

class Solution {
    static constexpr int mod = 1e9 + 7;
public:
    int concatenatedBinary(int n) {
        long long ans = 0;

        for (unsigned int i = 1; i <= n; ++i) {
            int bits = std::bit_width(i);
            ans = ((ans << bits) | i) % mod;
        }

        return ans;
    }
};
