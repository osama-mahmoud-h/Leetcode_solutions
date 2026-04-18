class Solution {
public:
    int mirrorDistance(int n) {
        string num_str = to_string(n);
        reverse(num_str.begin(), num_str.end());

        return abs(n - stoi(num_str));
    }
};