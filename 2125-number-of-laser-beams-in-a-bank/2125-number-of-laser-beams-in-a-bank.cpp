class Solution {
private:
    int sum_bits(string s){
        int ans = 0;
        for (const auto &item: s){
            ans += item-'0';
        }
        return ans;
    }
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prev = 0;

        for (const auto &item: bank){
           int sum = sum_bits(item);
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
