class Solution {
public:
    int mySqrt(int x) {
        long long  int l=0,h=x;
        while(l<h){
            long long int mid = (l+h)/2;
            if((mid*mid)>=x){
                h=mid;
            }
            else{
                l=mid+1;
            }
        }
        if(l*l>x){
            return --l;
        }
        return l; 
    }
};