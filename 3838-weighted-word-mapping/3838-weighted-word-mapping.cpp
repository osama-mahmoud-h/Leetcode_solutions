class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for(const auto & word : words){
            int sum = 0;
            for(const auto ch : word){
                sum += weights[ch-'a'];
            }
            ans += ((25 - sum%26) + 'a');
        }
        return ans;
    }
};