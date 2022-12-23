class Solution {
public:

int triangleNumber(vector<int>& nums) {
    int n=nums.size();
    if(n<3){
        return 0;
    }
    sort(nums.rbegin(),nums.rend());
   int ans=0;
    for (int i = 0; i <n-2 ; ++i) {
        for (int j = i+1; j <n-1 ; ++j) {
          
            //binary search
            int l = j+1,h=n-1;
            while(l<h){
                int mid = (l+h)/2;
                if((nums[mid]+nums[j])>nums[i]){
                    l=mid+1;
                }else{
                    h=mid;
                }
            }
           // cout<<j<<" , "<<l<<"\n";
            if((nums[l]+nums[j])<=nums[i]){
                l--;
            }
            ans+=l-j;
        }
      
    }
    return ans;
}
};



