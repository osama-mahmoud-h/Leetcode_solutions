class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int n=nums.size();
    int l=0,h=n;
    int lower = -1,upper=-1;
    //search for upper bound
    while (l<h){
        int mid=(l+h)/2;
        if(nums[mid]==target&&(mid==n-1||nums[mid+1]!=target)){
            upper=mid;
            break;
        }
        if(nums[mid]<=target){
            l=mid+1;
        } else{
            h=mid;
        }
    }

    //search for lower bound
    l=0,h=n;
    while (l<h){
        int mid=(l+h)/2;
        cout<<mid<<" , ";
        if(nums[mid]==target&&(mid==0||nums[mid-1]!=target)){
            lower=mid;
            break;
        }
        if(nums[mid]<target){
             l=mid+1;
        } else{
            h=mid;
        }
    }
    return  vector<int>{lower,upper};
    }
};