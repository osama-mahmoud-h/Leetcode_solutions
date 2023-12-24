
class Solution {
public:
    int minOperations(std::string s) {
        int n = s.length();
        std::string way1(n, ' '), way2(n, ' ');
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                way1[i] = '0';
                way2[i] = '1';
            } else {
                way1[i] = '1';
                way2[i] = '0';
            }
        }

        for (int j = 0; j < n; j++) {
            if (way1[j] != s[j]) {
                cnt1++;
            }
            if (way2[j] != s[j]) {
                cnt2++;
            }
        }

        return std::min(cnt1, cnt2);
    }
};
