class Solution {
private:
    int MOD = 1e9+7;
    int low,high,zero,one;
    vector<int> memo;
    int helper(int zeros, int ones){

        int sum = (zeros+ones);
        if(sum>high){
            return 0;
        }
        if(sum == high){
            return 1;
        }

        if(memo[zeros+ones]!=-1){
            return memo[zeros+ones];
        }

        int addzero = helper(zeros+zero,ones);
        int addone = helper(zeros,ones+one);
        int cntlow = (sum>=low && sum<high) ? 1 : 0;

        return memo[zeros+ones] = (addzero + addone + cntlow) %MOD;
    }
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        this->low = low;
        this->high = high;
        this->zero = zero;
        this->one = one;
        memo = vector<int>(high+1,-1);
        return helper(0,0);
    }
};

