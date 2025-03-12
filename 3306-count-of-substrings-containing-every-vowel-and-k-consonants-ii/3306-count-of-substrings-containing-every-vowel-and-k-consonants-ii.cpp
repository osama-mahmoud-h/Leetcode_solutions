class Solution {
private:
    bool is_vowel(char c){
        unordered_set<char>vowels({'a', 'e', 'i', 'o','u'});
        return vowels.find(c) != vowels.end();
    }

public:
    long long countOfSubstrings(string word, int k) {
        unordered_map<char,int> cnt_vowels;
        int n = word.length(), cnt_subStr = 0, low = 0;
        int cnt_constants = 0;
        
        for (int i = 0; i < n; ++i) {
            if(is_vowel(word[i])){
                cnt_vowels[word[i]]++;
            }else{
                cnt_constants++;
            }
            if(cnt_constants == k and cnt_vowels.size()>4){
                 cnt_subStr++;
                while(low <= i and cnt_constants >= k ){
                if(is_vowel(word[low])){
                    //cnt_vowels[word[low]]--;
                    if(--cnt_vowels[word[low]] <= 0){
                        cnt_vowels.erase(word[low]);
                    }
                }else{
                    cnt_constants--;
                }
                low++;
            }
            }
           
           
            
        }
        return cnt_subStr;
    }
};