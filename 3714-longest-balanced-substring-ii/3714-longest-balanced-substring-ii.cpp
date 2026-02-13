#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size(), ans = 0;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && s[j] == s[i]) j++;
            ans = max(ans, j - i);
            i = j;
        }

        auto best_2 = [&](char x, char y, char third) {
            int best = 0, i = 0;
            while (i < n) {
                if (s[i] == third) { i++; continue; }
                int st = i, bal = 0;
                unordered_map<int,int> fst; fst[0] = st;
                int j = st;
                while (j < n && s[j] != third) {
                    bal += (s[j] == x ? 1 : -1);
                    if (!fst.count(bal)) fst[bal] = j+1;
                    else best = max(best, j+1 - fst[bal]);
                    j++;
                }
                i = j;
            }
            return best;
        };

        ans = max(ans, best_2('a','b','c'));
        ans = max(ans, best_2('a','c','b'));
        ans = max(ans, best_2('b','c','a'));

        int ca=0, cb=0, cc=0;
        map<pair<int,int>,int> mp; mp[{0,0}] = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='a') ca++;
            else if(s[i]=='b') cb++;
            else cc++;
            pair<int,int> k = {ca-cb, ca-cc};
            if(mp.count(k)) ans = max(ans, i - mp[k]);
            else mp[k] = i;
        }

        return ans;
    }
};