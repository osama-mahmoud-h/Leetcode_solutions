class Solution {
    int findFirstOccurrenceIndex(string &s, char ch){
        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == ch){
                return i;
            }
        }
        return -1;
    }
    void reverse(string &s, int start, int end){
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
public:
    string reversePrefix(string word, char ch) {
        int idx = findFirstOccurrenceIndex(word,ch);
        if(idx == -1){
            return word;
        }
        reverse(word,0,idx);
        return word;
    }
};