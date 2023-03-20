class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int sz =flowerbed.size();
        if(sz==1&&flowerbed[0]==0)return 1 ;
        
        for (int i = 0; i < sz; ++i) {
            if(flowerbed[i]==0){
                        cout<<i<<"  , "<<flowerbed[i]<<" \n";

                if( (i==0 && flowerbed[i+1]==0) ||
                        (i+1==sz &&flowerbed[i-1]==0) ||
                        (i>0&&i+1<sz && flowerbed[i+1]==0&&flowerbed[i-1]==0) ){
                        n--; flowerbed[i]=1; continue;
                }
            }
        }
        
        
        return n<=0;
    }
};