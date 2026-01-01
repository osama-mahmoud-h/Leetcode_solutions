class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] < 9 ){
            digits[n-1]++;
            return digits;
        }
        reverse(digits.begin(), digits.end());
        vector<int>ans(n+1, 0);
        int rem = 1, i = 0;
        for (const auto &item: digits){
            ans[i++] = (item+rem) % 10;
            rem = (item+rem) / 10;
           // cout<<"rem: "<<rem<<"\n";
        }
        if(rem){
           ans[n] = rem; 
        }
        else if(ans[n] == 0 ){
            ans.pop_back();
        }
         reverse(ans.begin(), ans.end());
        return ans;
    }
};