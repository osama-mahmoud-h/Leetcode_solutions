class Solution {
public:
    int bitwiseComplement(int n) {
        if(n<=0)
            return 1;
        long long mask = (1 << ((int)log2(n) + 1)) - 1;
        return n ^ mask;
    }
};