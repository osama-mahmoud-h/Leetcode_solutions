class Solution {
    private:
    bool is_vowel(char c){
        unordered_set<char>vs = {'a', 'e', 'i', 'o', 'u'};
        return vs.count(tolower(c));
    }
public:
    string sortVowels(string s) {
        string vs = "";
        for(auto const&c : s){
            if(is_vowel(c))
                vs.push_back(c);
        }
        sort(vs.begin(), vs.end());
        for(int i = 0, j = 0; i<s.length(); i++){
            if(is_vowel(s[i]))
                s[i] = vs[j++];
        }
        return s;
    }
};