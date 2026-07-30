class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0, n =  word.length();
        for(int i = 0 ,j = 1; i < n; i+= 8, j++){
            ans += min(8, n - i) * j;
        }
        return ans;
    }
};