
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        while (a||b || c){
            int x = a&1;
            int y = b&1;
            int z = c&1;
            if((x|y)!=z){
               if((x&y))
                   ans++;
                ans++;
            }
            
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return ans;
    }
};