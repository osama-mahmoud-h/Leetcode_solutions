class Solution {
    int sum_digits(int n){
        int sum = 0;
        while(n){
            sum += n%10; 
            n /= 10; 
        }
        return sum;
    }
public:
    int minElement(vector<int>& nums) {
        int mn = 1e9+7;
        for(const int &i : nums){
            mn = min(mn, sum_digits(i));
        }
        return mn;
    }
};