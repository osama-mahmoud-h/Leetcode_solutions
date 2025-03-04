class Solution {
public:
    bool checkPowersOfThree(int n) {
        int power = 16, base = 3;
        while(power >= 0){
            if(n < pow(base,power)){
                power--;
                continue;
            }
            n -= pow(base,power--);
        }
        return n==0;
    }
};