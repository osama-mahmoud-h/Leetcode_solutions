#define pb push_back
#define FastIo ios::sync_with_stdio(0);cin.tie(0)
class Solution {
public:
   int search_helper(vector<int>& nums,int l,int h){
      FastIo; 
    int n = nums.size();
    if((h-l)==1){
        return nums[l];
    }
    if(nums[h-1]>nums[l]){
        return nums[l];
    }
    int mid = (l+h)/2;
    return min(search_helper(nums,l,mid), search_helper(nums,mid,h));
}
int findMin(vector<int>& nums) {
    int n =nums.size();
    return search_helper(nums, 0,n);
}
};