class Solution {
private:
    bool is_vowel(char c){
        return unordered_set<char>{'a', 'e', 'i', 'o', 'u'}.count(tolower(c));
    }
public:
    bool doesAliceWin(string s) {
        int cntv = 0;
        for(auto const& c : s){
            cntv += is_vowel(c);
        }cout<<cntv;

        if(!cntv) return 0;
        if(cntv%2 !=0 ) return 1;

        return 1;
    }
};