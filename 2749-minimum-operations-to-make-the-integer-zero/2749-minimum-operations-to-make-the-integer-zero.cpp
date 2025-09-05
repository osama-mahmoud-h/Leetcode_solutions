class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num1 < num2) return -1;
        int k = 1;
       while(true){
           int diff = num1 - (long long)num2 * k;
           if(diff < k )
            return -1;
           if(__builtin_popcount(diff) <= k){
               return k;
           }
           ++k;
       }
        return -1;
    }
};