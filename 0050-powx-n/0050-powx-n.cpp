class Solution {
public:
    double pow_(double x, long long int n){
        if(n==0){
            return 1.0;
        }
        if(n<0){
            return 1/pow(x,-1*n);
        }
        if(n%2==1){
            return x*pow_(x*x,(n-1)/2);
        }
        else{
          return pow_(x*x,n/2); 
        }
    }
    double myPow(double x, int n) {
     
        return pow_(x,n);
    }
};