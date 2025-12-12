class Solution {
public:
    int countOdds(int low, int high) {
        return ((high + (high%2)) - (low-(low%2))) / 2;
    }
};