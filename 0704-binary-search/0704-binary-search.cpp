class Solution {
public:
    int bs(vector<int>& nums,int t ,int l,int h){
       if(l>=h){
           return -1;
       }
        int mid=(l+h)/2;
        if(nums[mid]==t){
            return mid;
        }
         else if(nums[mid]>t){
           return  bs(nums,t,l,mid);
         }else{
            return bs(nums,t,mid+1,h);
         }   
        return -1;
    }
    int search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        return bs(nums,target,0,nums.size());
    }
};
//[1,2,3,4]