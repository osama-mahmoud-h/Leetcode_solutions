class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> l(26,0), h (26,0);
        int ans = 0;
        for(const char &c: word){
            if (islower(c))
                l[c-'a']++;
            else h[c-'A']++;    
        }
        for(int i=0;i<26;i++)
            ans += l[i] and h[i];
        return ans;
    }
};