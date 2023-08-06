class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int m = to_string(high).length();
        vector<int>ans , digits(m,0);

        int j = m-1;
        int tmp = low;
        while(j>=0 && tmp>0){
            digits[j--] = 0;
            tmp /= 10;
        }
        j++;

        while (j>=0){
                for (int x = digits[j]+1; x < 9 ; ++x) {
                    long long int  sum = 0;
                    for (int i = j; i < m ; ++i) {
                        digits[i] = i>j ? digits[i-1]+1 : x;
                        if(digits[i]>9){
                            sum = 0;
                            break;
                        }
                        sum += digits[i]*(pow(10,m-i-1));
                    }
                    if(sum>=low && sum<=high)
                        ans.push_back(sum);
                }
            j--;
        }
        return ans;
    }
};