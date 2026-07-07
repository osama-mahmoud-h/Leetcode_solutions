class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        string digits = "";
        while(n > 0){
            sum += (n%10);
            digits = (n%10) == 0 ? digits : (char)('0'+(n%10)) + digits ;
            //x = (n%10) == 0 ? x : ((x*10) + n%10); 
            n /= 10; 
        }
        return sum * stoi(digits.empty() ? "0" : digits);
    }
};