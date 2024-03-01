class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        int n = s.length();
        
        for (const char& c : s) {
            ones += c - '0';
        }

        // Initialize string with '0'
        string res(n, '0');

        // Set the most significant bit to '1' if there are more than 0 ones
        if (ones > 0) {
            res[n - 1] = '1';
            ones--;
        }

        // Set remaining bits to '1' if there are more than 1 ones
        for (int i = 0; i < n - 1 && ones > 0; i++) {
            res[i] = '1';
            ones--;
        }

        return res;
    }
};