class Solution {
public:
    int waysToSplit(vector<int>& A) {
        int n = A.size();
        int mod = 1e9+7;
        for (int i = 1; i < A.size(); ++i) {
             A[i]+=A[i-1];
        }
        


    
    int ans=0;
    for (int i = 0; i < n-2; ++i) {
        //find right most second pointer(position)
        int l=i+1 , h=n-1;
        int right=-1,left=-1;
        while(l<h){
            int m=(l+h)/2;
            if((A[m]-A[i])<=(A[n-1]-A[m])){
                right=m;
                l=m+1;
            }else{
             h=m;   
            }
        }


        l=1+i,h=n-1;
        //find left most second pointer(position)
        while(l<h){
            int m=(l+h)/2;
            if(A[i]<=(A[m]-A[i])){
                left=m;
                h=m;
             }
            else{
                 l=m+1;
             }
        }
        
     //   cout<<i<<" "<<left<<"  "<<right<<"\n";
        if(left==-1 || right==-1 || left>right){
            continue;
        }
        ans=(ans+(right-left+1)%mod)%mod;
    }

    return ans;
    }
};

