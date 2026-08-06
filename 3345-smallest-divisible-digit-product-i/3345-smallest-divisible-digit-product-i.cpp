class Solution {
    int prod_digits(int n){
        int ans = 1;
        while(n){
            ans *= (n%10);
            n /= 10; 
        }
        return ans;
    }
public:
    int smallestNumber(int n, int t) {
        for (int i = n;i<1e6;i++){
            if(prod_digits(i) % t == 0)
                return i;
        }
        return n;
    }
};