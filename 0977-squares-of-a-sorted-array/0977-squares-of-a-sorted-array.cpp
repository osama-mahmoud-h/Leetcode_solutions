class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        int pivot = 0;
        for (int i = 0; i < n-1; ++i) {
            nums[i] = nums[i] * nums[i];
            if(nums[i] > nums[i+1]*nums[i+1]){
                pivot = i+1;
            }
        }
        nums[n-1] = nums[n-1] * nums[n-1];
       // cout<<pivot;
        int i = pivot-1, j = pivot;
        vector<int>ans ;

        if(pivot==n-1){
            reverse(nums.begin(), nums.end());
            return nums;
        }
        
        while(j<n or i>0){
            if(i >=0 and nums[i] < nums[j]){
                ans.push_back(nums[i--]);
            }else if(j<n){
                ans.push_back(nums[j++]);
            }
        }
        return ans;
    }
};