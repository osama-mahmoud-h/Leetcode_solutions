class Solution {
public:
    int maxOperations(string s) {
        vector<int>consecutive_sums;
        int ans = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int sum = 0;
            while(i < n and s[i] == '1'){
                sum++;
                i++;
            }
            if(i<n and sum){
                consecutive_sums.push_back(sum);
                i--;
            }
        }
        n = consecutive_sums.size();
        for (const auto &item: consecutive_sums){
            ans += (n--) * item;
        }
            
        return ans;
    }
};