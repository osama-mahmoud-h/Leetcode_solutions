class Solution {
public:
    int passThePillow(int n, int time) {
        int ans = 0;
        int i = 1;
        int inc = 1;
        
        while(time){
            if(i==n || (i==1 && inc<0)){
                inc *= -1;
            }
            i += inc;
            time--;
            ans = i;
        }
        return ans;
    }
};