class Solution {
public:
    bool isPowerOfTwo(int n) {
         long long int N = (long long int) n;
        return (N&(N-1))==0 &&n!=0 ;
    }
};

    