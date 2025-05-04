class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<string, int> cnt;
        for (const auto &item: dominoes){
            vector<int>temp = item;
            sort(temp.begin(), temp.end());
            cnt[to_string(temp[0])+ to_string(temp[1])]++;
        }
        
        int ans = 0;
        for (const auto &[key, val]: cnt){
            ans += (val*(val-1))/2 ;
        }

        return ans;
    }
};