class Solution {
public:
    int binaryGap(int n) {
        int i = 0, j = 0, set = 0;
        int ans = 0;
        while(n > 0){
            if(n&1){
                if(set){
                    ans = max(ans, j-i);
                }else{
                     set = 1;
                }
                i = j;  
            }
            n >>= 1;
            j++;
        }
        return ans;
    }
};