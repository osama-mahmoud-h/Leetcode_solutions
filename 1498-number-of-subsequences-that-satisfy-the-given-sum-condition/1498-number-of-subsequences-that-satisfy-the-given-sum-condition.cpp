
//#define MOD (int)1e9+7

class Solution {
    private:
   int MOD = 1e9+7;  
    int upperBound(vector<int>& nums,int startIdx, int target){
        int l= startIdx, h=nums.size();
        int ans=-1;
        while (l<h){
            int mid =(l+h)/2;
            if((nums[startIdx]+nums[mid])<=target){
              ans=mid;
                l=mid+1;
            } else{
                h=mid;
            }
        }
        return ans;
    }
    long long int powxy(long long int x, long long int y) {
    if (y == 0) return 1;
    if (y%2 == 1) return (x*powxy(x, y-1))%MOD;
    long long int t = powxy(x, y/2);
    return (t*t)%MOD;
}
    public:

    int numSubseq(vector<int>& nums, int target) {
        long long int ans = 0;
                sort(nums.begin(),nums.end());
//cout<<MOD<<"\n";
        for (int i = 0; i < nums.size(); ++i) {
            int j = upperBound(nums,i,target);
           // cout<<i<<" , "<<j<<"\n";
            if(nums[i]*2<=target){
               ans = ((ans%MOD)+1)%MOD;
            }
            if(j<=i || j==-1){
                continue;
            }
            
             long long int allWays = powxy(2,(j-i))-1;
          //  cout<<"n: "<<allWays<<" , "<<j<<" . "<<i<<" = "<<(j-i)<<"\n";
            ans = ((ans%MOD)+allWays%MOD)%MOD;
        }
        return ans;
    }

};