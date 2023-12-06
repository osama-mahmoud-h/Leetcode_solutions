class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int st = 1;
        int inc = 1;
        for(int i=1;i<=n;i++){
            ans += inc++;
            if(i%7==0){
                st++;
                inc = st;
            }
        }
        return ans;
    }
};