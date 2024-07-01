class Solution {
    private:
    bool is_odd(int n){
        return n&1;
        }
public:
    bool threeConsecutiveOdds(vector<int>& a) {
        for (int i=1; i<a.size()-1;i++){
            if(is_odd(a[i-1]) && is_odd(a[i]) && is_odd(a[i+1]))
                return 1;
            }
            return 0;
    }
};