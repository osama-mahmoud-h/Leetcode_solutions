class Solution {
public:
    string largestGoodInteger(string num) {
        char ans = '\0';
        char mn = '0';

        for(int i = 1; i< num.length() - 1; i++){
            if(num[i] == num[i-1] and num[i-1] == num[i+1]){
                if(num[i]>=mn){
                    mn = ans = num[i];
                }
            }
        }

        return ans != '\0' ? string(3, ans) : "";
    }
};