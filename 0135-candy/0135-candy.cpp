class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(); 
        vector<int>ar(n,1);
        if(n<2){
            return 1;
        }
        
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                ar[i] = ar[i-1] + 1;
            }
        }
        
        for(int i=n-1;i>0;i--){
            if(ratings[i-1]>ratings[i]){
                ar[i-1] = max(ar[i-1],ar[i]+1);
            }
        }
        return accumulate(ar.begin(),ar.end(),0) ;
    }
};

/**

[1,2,3,4,5]


[5,4,0,2,1]
[3,2,1,2,1]

*/