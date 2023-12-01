class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = -2, h = -1;
        int i = 0 , j = n-1;
        int mx = INT_MIN, mn = INT_MAX;
       while(i<n){
           mn = min(mn,nums[j]);
           mx = max(mx,nums[i]);
           if(mn<nums[j]){
               h = j;
               cout<<"j: "<<j<<"\n";
           }
           if(mx>nums[i]){
               l = i;
                cout<<"i: "<<i<<"\n";
           }
           i++, j--;
       }
        return l - h +1;
    }
};
/**
[1,2,3,4]
mn = 4, mx = 1,
  if (A[i] < max) end = i;
      if (A[n-1-i] > min) beg = n-1-i; 
*/