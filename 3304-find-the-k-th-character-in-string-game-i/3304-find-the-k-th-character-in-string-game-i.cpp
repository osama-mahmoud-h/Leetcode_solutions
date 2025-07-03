class Solution {
private:
    string generate_next(string &s){
        string ans = "";
        for(char const &c : s){
            int next_char_idx = 1 + (c-'a');
            ans += (next_char_idx%26)+'a'; 
        }
        return ans;
    }
public:
    char kthCharacter(int k) {
        string s = "a";

        while(s.length() < k){
            s += generate_next(s);
        }
        return s[--k];
    }
};