class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0;

        for (const auto &item: bank){
           int sum = 0;
              for (const auto &c: item){
                sum += c - '0';
            }
            if(sum){
                if(prev){
                    ans += prev * sum;
                }
                prev = sum;
            }
        }
        return ans;
    }
};
