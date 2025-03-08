class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int Ws = 0, b = 0, ans = INT_MAX;
        unsigned int n = blocks.length();

        int low = 0, hi = 0;
        for ( ; hi < k; hi++) {
            if(blocks[hi]=='W')Ws++;
        }
        ans = min(ans,Ws);
        for ( hi = k; hi < n; ++hi) {
           if(blocks[hi]=='W')
               Ws++;
           if(blocks[low]=='W')
               Ws--;
           low++;
            ans = min(ans,Ws);
        }
        return ans;
    }
};