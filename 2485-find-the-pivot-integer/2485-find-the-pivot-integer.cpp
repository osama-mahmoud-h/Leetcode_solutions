class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return n;
        
        vector<int>prefix_sum(n,0);
        vector<int>sufix_sum(n,0);
        
        int  j = n-1 ;

        prefix_sum[0] = 1;
        sufix_sum[j] = n;
        
        for(int x = 1, y=n-2; x<n; x++,y--){
            prefix_sum[x] = (x+2)*(x+1)/2;
            sufix_sum[y] = sufix_sum[y+1]+(y+1);
        }
        
        for(int i=0; i<n;i++){
            if(prefix_sum[i]==sufix_sum[i]){
                return ++i;
            }
        }
        
        
        return -1;
    }
};