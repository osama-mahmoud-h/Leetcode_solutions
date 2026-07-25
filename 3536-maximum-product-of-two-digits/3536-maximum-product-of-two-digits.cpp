class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;

        while(n){
            digits.push_back(n%10);
            n /= 10;
        }
        sort(digits.rbegin(), digits.rend());

        return digits[0] * digits[1];
    }
};