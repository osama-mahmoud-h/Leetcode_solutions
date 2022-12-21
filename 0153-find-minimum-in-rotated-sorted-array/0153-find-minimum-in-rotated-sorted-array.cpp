class Solution {
public:
    int findMin(vector<int>& nums) {
       int n = nums.size();
    if(n==1||(nums[0]<nums[n-1])){
        return nums[0];
    }
    int pivot = 0;
    //else it rotated
   int l=0,h=n-1;
    while (l<h){
        int mid = (l+h)/2;
        if(nums[mid]>nums[h]){
            if(nums[mid+1]<nums[mid]){
              pivot = mid+1;
              break;
            }
            else
                l=mid+1;
        }
        if(nums[mid]<nums[h]){
            if(nums[mid]<nums[mid-1]){
                pivot = mid;
                break;
            } 
            else
                h=mid;
        }
    } 
        return nums[pivot];

    }
};