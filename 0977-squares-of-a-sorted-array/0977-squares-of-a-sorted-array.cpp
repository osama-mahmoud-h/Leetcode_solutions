
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i<n && nums[i]<0){
            i++;
        }
        int j = i-1;
        vector<int>ans;
       // ans.push_back(nums[i]*nums[i]);
        while (i<n || j>-1){
           if(i<n){
               if(j>-1){
                   if(nums[i]*nums[i]<nums[j]*nums[j]) {
                       ans.push_back(nums[i] * nums[i]);
                       i++;
                   } else{
                       ans.push_back(nums[j]*nums[j]);
                       j--;
                   }
               }else{
                   ans.push_back(nums[i]*nums[i]);
                   i++;
               }
           }else{
               ans.push_back(nums[j]*nums[j]);
               j--;
           }
        }
        return ans;
    }
};