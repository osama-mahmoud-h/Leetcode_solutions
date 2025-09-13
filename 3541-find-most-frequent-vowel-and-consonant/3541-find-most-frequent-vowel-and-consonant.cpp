class Solution {
private:
    bool is_vowel(char c){
        c = tolower(c);
        return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
    }
public:
    int maxFreqSum(string s) {
        vector<int>map(26,0);
        int max_v = 0, max_c = 0;
        for(auto const &c : s){
            map[c-'a']++;
            if(is_vowel(c))
                max_v = max(max_v , map[c-'a']);
            else
                max_c = max(max_c, map[c-'a']);    
        }
        return max_v + max_c;
    }
};