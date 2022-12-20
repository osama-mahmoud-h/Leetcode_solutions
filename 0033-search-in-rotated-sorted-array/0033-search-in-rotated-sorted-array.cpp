class Solution {
public:
  int findPivot(vector<int>& nums) {
    int n = nums.size();

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
    return pivot;
}
int binarySearch(vector<int>& nums,int l,int h, int target){
    while (l<h){
        int mid = (l+h)/2;
        if(nums[mid]==target) {return mid;}
        else if(nums[mid]<target){
            l=mid+1;
        } else{
            h=mid;
        }
    }
    return -1;
}
int search(vector<int>& nums, int target) {
    int n= nums.size();
    if(n==1||(nums[0]<nums[n-1])){
        return binarySearch(nums,0,n,target);
    } // else array is circular

    //search in right bound
    int l = findPivot(nums) , h = n;
    int right = binarySearch(nums,l,h,target);
    int left = binarySearch(nums,0,l,target);
     if(right!=-1||left!=-1){
         return max(right,left);
     }
    return -1;
}
};