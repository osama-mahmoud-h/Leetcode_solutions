class Solution {
public:
    int smallestNumber(int n) {
        int bit_set = 1;
        while(bit_set < n){
            n = n | bit_set;
            bit_set <<= 1;
        }
        return n;
    }
};