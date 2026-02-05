class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
       int n = nums.size();
       vector<int> ans(n, 0);
       for (int i = 0; i < n; i++){
            int steps = abs(nums[i]);
            if(nums[i] > 0){
                ans[i] = nums[(i+steps)%n];
            }else{
                ans[i] = nums[((i - steps) % n + n)%n];
            }
       }
       return ans; 
    }
};