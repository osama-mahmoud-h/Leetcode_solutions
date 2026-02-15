class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.length() - 1, j = b.length() - 1,  carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            sum += (i >= 0) ? a[i--] - '0' : 0;
            sum += (j >= 0) ? b[j--] - '0' : 0;

            ans += (sum % 2) + '0';
            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
