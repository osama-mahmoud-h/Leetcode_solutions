class Solution {
public:
    int countOdds(int low, int high) {
        high += (high%2);
        low -= (low%2);
        return (high - low)/2;
    }
};