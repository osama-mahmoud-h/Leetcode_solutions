class Solution {
private :
    char next_char(char c){
        return (c-'a'+1)%26 + 'a';
    }
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0, n = str1.length() , m = str2.length();
        int cnt = 0;
        for ( ;  i<n  ; i++) {
            if(str1[i] == str2[j] or this->next_char(str1[i]) == str2[j] ){
                cnt++;
                j++;
            }
        }
        return cnt == m;
    }
};
