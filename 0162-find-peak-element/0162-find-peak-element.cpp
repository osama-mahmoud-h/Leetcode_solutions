class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0, n=nums.size(), h=n;
    if(n==1){
        return 0;
    }
    while (l<h){
       int mid=(l+h)/2;
       if(mid==n-1 && nums[mid]>nums[mid-1]){
               return mid;
       } else if(mid==0 && nums[mid]>nums[mid+1]){
           return mid;
       } else if(
                 (mid-1)>=0 && (mid+1) < n &&
                 nums[mid]>nums[mid+1] && 
                 nums[mid]>nums[mid-1]
                 ){
           return mid;
       }
       
       if((mid+1)<n && nums[mid]<nums[mid+1]){
           l=mid+1;
       } else{
           h=mid;
       }
    }
    return 0;
    }
};

