class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size(), i = 0, j = n-1;
        bool ans = 1;
        while(i < n-1 and nums[i] < nums[i+1]){
            i++;
        }
        ans &= i>0;
        while(j>0 and nums[j] > nums[j-1]){
            j--;
        }
        ans &= j < n-1;
        while(i<=j and i < n-1 and nums[i] > nums[i+1]){
            i++;
        }
        ans &= i==j;

        return ans;
    }
};