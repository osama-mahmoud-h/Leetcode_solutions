class Solution {
public:
    int countOdds(int low, int high) {
        int cnt = (high-low)/2;
        if(low%2!=0||high%2!=0){
            cnt++;
        }
        return cnt;
    }
};