class Solution {
public:
    int minimumSize(vector<int>& nums, int mx) {
      int l=1,h=1e9;
        
        while(l<h){
            int mid = (l+h)/2;
            int cnt=0;
            for(auto i:nums){
                cnt+=(i-1)/mid;
            }
            if(cnt>mx){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return l;
    }
};