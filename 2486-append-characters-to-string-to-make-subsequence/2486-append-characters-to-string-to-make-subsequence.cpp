class Solution {
public:
    int appendCharacters(string s, string t) {
        int t_len = t.length();
        int i = 0, j = 0;
        
        while(i<s.length() || j<t.length()){
            if(i>=s.length() || j>=t.length()){
                break;
            }
            if(s[i] == t[j]){
                t_len--;
                j++;
            }
            i++;
        }
        return t_len;
    }
};