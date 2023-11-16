class Solution {
    private:
    int convert_binary_str_to_decimal(string bin_str){
        int n = bin_str.length();
        int sum = 0;
        for (int i = n-1; i >=0 ; --i) {
            int digit = bin_str[i]-'0';
            sum += pow(2,n-i-1)*(digit);
        }
        return sum;
    }
    string convert_deci_to_bin(int num){
        string ans = "";
        while (num>0){
            ans+= to_string(num&1);
            num = num>>1;
        }
        //reverse(ans.begin(),ans.end());
        return ans.length()==0 ? "0" :ans ;
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        int max_num = 1<<n;
        unordered_set<int>set;
        for (const auto &item: nums){
            set.insert(convert_binary_str_to_decimal(item));
        }
        string ans = "";
        for (int i = 0; i <= n; ++i) {
            if(set.find(i)!=set.end()){
                continue;
            }
            ans =  convert_deci_to_bin(i);
            break;
        }
        while(ans.length()<n)
            ans+="0";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};