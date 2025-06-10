class Solution {
public:
    int maxDifference(string s) {
        vector<int>freq(26,0);
        for (const auto &ch: s){
            freq[ch - 'a']++;
        }
        int min_even = INT_MAX, max_odd = 0;
        for (int i = 0; i < 26; ++i) {
            if(freq[i]==0)
                continue;
            if(freq[i]%2 == 0){
                min_even = min(min_even , freq[i]);
            }else{
                max_odd = max(max_odd, freq[i]);
            }
        }

        return max_odd - min_even;
    }
};
