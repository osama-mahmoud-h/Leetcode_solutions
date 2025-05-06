class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int max = INT_MAX;
        vector<int>freq(26,max);
        vector<string>ans;

        for (const auto &word: words){
            vector<int>temp_freq(26,0);
            for (const auto &c: word){
                temp_freq[c-'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                freq[i] = min(freq[i], temp_freq[i]);
            }
        }

        for (int i = 0; i < 26; ++i) {
            if(freq[i] == max or freq[i] == 0)
                continue;
            for (int j = 0; j < freq[i]; ++j) {
                //char cur_ch = ;
                string res = "";
                res += 'a' + i;
                ans.push_back(res);
            }
        }
        
        return ans;
    }
};