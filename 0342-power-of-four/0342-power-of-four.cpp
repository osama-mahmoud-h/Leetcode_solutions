class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && ((n-1)&n)==0 && ( __builtin_popcount(n-1)%2==0);
    }
};
/**

0 0 0 0 0

8:1 0 0 0
           &
7:0 1 1 1
--------
 0 0 0 0 

0 0 0 1 1
        &
0 0 1 0 0
---------
0 0 0 0 0

0 0 1 1 1
          &
0 1 0 0 0
----------


1 0 0 0 0 0 0

4
16
64
*/