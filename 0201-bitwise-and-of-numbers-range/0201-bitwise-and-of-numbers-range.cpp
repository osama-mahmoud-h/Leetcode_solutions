class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
          long long int shft = 1 ;
    int ans = 0;
    while (shft<=right){
        if((right&shft)==0){
            //
        } else{
            int inBetween = right-shft;
            int inBetween2 = shft-1;
            int inBetween3 = (shft-1)|(inBetween);
            if((inBetween>=left&&inBetween<=right)||
              (inBetween2>=left&&inBetween2<=right)||
               ( inBetween3>=left&&inBetween3<=right) ){
                //
            }else{
                ans|=shft;
            }
        }
        shft<<=1;
    }
    return ans;
    }
};