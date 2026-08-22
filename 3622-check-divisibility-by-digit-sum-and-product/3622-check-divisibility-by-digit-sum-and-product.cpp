class Solution {
private: 
    int sum_and_prod_digits(int n){
        int sum = 0, prod = 1;
        while(n){
            sum += (n%10);
            prod *= (n%10);
            n /= 10; 
        }
        return sum + prod;
    }
public:
    bool checkDivisibility(int n) {
        int res = sum_and_prod_digits(n);
        return n%res == 0;
    }
};