class Solution {
private:
    bool is_vowel(char c){
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string small_word(string s){
        for (int i = 0; i < s.length(); ++i) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
    string unify_vowels_mismatch(string s){
        for (int i = 0; i < s.length(); ++i) {
           s[i] = tolower(s[i]);
           if(is_vowel(s[i]))
               s[i] = '_';
        }
        return s;
    }
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> ans;
        unordered_map<string,vector<string>> smalled_words_map;
        unordered_set<string> originalwords;
        unordered_map<string,string> unified_unmatched_vowels;

        for (const auto &item: wordlist){
            originalwords.insert(item);
            string smalled_word = small_word(item);
            smalled_words_map[smalled_word].push_back(item);

            string unified_vowels = unify_vowels_mismatch(item);
            if(unified_unmatched_vowels.find(unified_vowels) == unified_unmatched_vowels.end())
                unified_unmatched_vowels[unified_vowels] = item;
        }

        for (const auto &item: queries){
            if(originalwords.count(item)){
                ans.push_back(item);
                continue;
            }
            string smalled_word = small_word(item);
            if(smalled_words_map.count(smalled_word)){
                ans.push_back(smalled_words_map[smalled_word].front());
                continue;
            }
            string unified_vowels = unify_vowels_mismatch(item);
            if(unified_unmatched_vowels.find(unified_vowels) != unified_unmatched_vowels.end())
                ans.push_back(unified_unmatched_vowels[unified_vowels]);
            else    
                ans.push_back("");     
            
        }

        return ans;
    }
};