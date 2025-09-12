class Solution {
private:
    bool is_vowel(char c){
        return unordered_set<char>{'a', 'e', 'i', 'o', 'u'}.count(tolower(c));
    }
public:
    bool doesAliceWin(string s) {
        for(auto const& c : s){
            if(is_vowel(c))
                return 1;
        }
        return 0;
    }
};