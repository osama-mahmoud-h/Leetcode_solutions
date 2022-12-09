class Solution {
public:
    int integerBreak(int n) {
         if(n<3){
            return 1;
        }
        if(n==3){
            return 2;
        }
        int threes = n/3;
        int remender = n-threes*3;
        int ans =  pow(3,threes);
        
        if(remender==2){
            ans= (int)pow(3,threes)*2;
        }else if(remender == 1){
            threes--;
            remender+=3;
            ans= (int)pow(3,threes)*4;
        }
        return ans; 
    }
};