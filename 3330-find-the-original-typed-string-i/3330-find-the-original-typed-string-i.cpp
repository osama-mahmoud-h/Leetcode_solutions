class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.length();
        int ans = 1;
        for(int i = 0; i < n; i++){
            char cur = word[i];
            int cnt = 0;
            while(i<n and cur == word[i]){
                cnt++ ,i++;
            }
            i--;
            ans += --cnt;
        }
    return ans;    
    }
};