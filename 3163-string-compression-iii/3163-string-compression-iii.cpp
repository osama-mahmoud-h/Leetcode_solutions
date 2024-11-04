class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int n = word.length();
        for (int i = 0; i < n; ) {
            int cnt = 0;
            char cur = word[i];
            while (i<n and cnt<9 and cur==word[i]){
                i++;
                cnt++;
            }
            ans.push_back(cnt+'0');
            ans.push_back(cur);
        }
        return ans;
    }
};
