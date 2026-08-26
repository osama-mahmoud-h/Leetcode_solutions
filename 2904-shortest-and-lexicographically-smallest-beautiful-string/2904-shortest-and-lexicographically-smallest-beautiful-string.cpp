class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int sum = 0, n = s.length();

        for (int l = 0 , h = 0  ; h < n; h++) {
            while (l < h && s[l] == '0' ){l++;};
            if(s[h] == '1' and ++sum >= k){           
                string cur_window = s.substr(l, h - l + 1);
                ans = ans.empty() ? cur_window : (cur_window.length() != ans.length() ? (cur_window.length() < ans.length() ? cur_window : ans) : (cur_window < ans ? cur_window : ans));
                sum--;
                while (++l < h && s[l] != '1' );
            }

        }
        return ans;
    }
};
