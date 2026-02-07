class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> bPrefix(n + 1, 0);

        // bPrefix[i] = number of 'b' in s[0..i-1]
        for (int i = 0; i < n; ++i) {
            bPrefix[i + 1] = bPrefix[i] + (s[i] == 'b');
        }

        int totalA = 0;
        for (char c : s) {
            if (c == 'a') totalA++;
        }

        int ans = n;
        int aBefore = 0;

        // split at position i
        for (int i = 0; i <= n; ++i) {
            int deleteB = bPrefix[i];              // 'b' before i
            int deleteA = totalA - aBefore;        // 'a' after i
            ans = min(ans, deleteB + deleteA);

            if (i < n && s[i] == 'a') aBefore++;
        }

        return ans;
    }
};
