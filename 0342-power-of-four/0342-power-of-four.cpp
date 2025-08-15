class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        long long N = (long long)n;
        int last_one_position = 32 - __builtin_clz(n);
        return (N&(N-1)) == 0 and (last_one_position - 1)%2 == 0;
    }
};