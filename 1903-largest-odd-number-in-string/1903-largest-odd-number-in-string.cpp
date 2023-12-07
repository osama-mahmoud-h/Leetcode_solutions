class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int i = n-1;
        while(i>=0){
            int digit = num[i]-'0';
            if(digit%2==1){
                break;
            }
            i--;
        }
        i++;
        
        return num.substr(0,i);
    }
};