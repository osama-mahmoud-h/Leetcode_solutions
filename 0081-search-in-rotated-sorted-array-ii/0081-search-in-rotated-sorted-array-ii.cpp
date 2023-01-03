class Solution {
public:
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
bool search_help(vector<int>& nums,int l,int h, int target){
    int n = nums.size();
    if((h-l)==1){
        return nums[l]==target;
    }
    if(nums[h-1]>nums[l]){
        return binarySearch(nums,l,h,target) != -1;
    }
    int mid = (l+h)/2;
    return search_help(nums,l,mid,target) || search_help(nums,mid,h,target);
}
bool search(vector<int>& nums, int target) {
    int n = nums.size();
    return search_help(nums,0,n,target);
}

};