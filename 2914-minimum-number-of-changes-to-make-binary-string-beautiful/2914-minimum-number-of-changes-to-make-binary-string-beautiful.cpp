class Solution {
public:
    int minChanges(string s) {
        int ans = 0;
        int n = s.length(), i = 0, j = 0, prev_digit_sum = 0;

        while (i<n){
            char cur = s[i];
            int sum_digits = 0;
            while (i<n and cur==s[i]){
                i++;
                sum_digits++;
            }
            if(j>0){
                if(prev_digit_sum%2==1){
                    sum_digits--;
                    ans++;
                }
            }
            j++;
            prev_digit_sum = sum_digits;
        }
        return ans;
    }
};