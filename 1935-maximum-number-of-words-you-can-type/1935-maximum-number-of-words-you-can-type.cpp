class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int>set(26,0);
        int ans = 0;
        for(auto const &c : brokenLetters){
            set[c-'a']++;
        }
        bool broken = 0;
        for(auto const&c : text){
            if(c == ' '){
                ans += !broken;
                broken = 0;
                continue;
            }
            if(set[c-'a']) broken = 1;
        }

        return ans + !broken;
    }
};