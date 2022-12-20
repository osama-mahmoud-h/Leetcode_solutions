class Solution {
public:
    bool isPerfectSquare(int num) {
        
        for(long long int i=0;i*i<=num;i++){
            if(i*i==num){
                return 1;
            }
        }
        return 0;
    }
};