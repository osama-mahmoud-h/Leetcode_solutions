class Solution {
public:
    
bool perfict_square(int n){
    //cout<<sqrt()
    int product =(int) sqrt(n);
  //  cout<<product<<"\n";
    return product*product == n;
}
bool judgeSquareSum(int c){
    for (long long int i = 0; i <=ceil(sqrt(c)) ; ++i) {
        long long int a = i*i;
        long long int b = c-a;
         
        if(a>=0&&b>=0&&perfict_square(a)&&perfict_square(b)){
            // cout<<a<<"  "<<b<<"\n";
            return 1;
        }
    }
    return 0;
}
  
};