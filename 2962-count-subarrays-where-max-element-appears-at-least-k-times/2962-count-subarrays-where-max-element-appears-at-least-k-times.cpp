class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans = 0;
        int mx_ele = *max_element(nums.begin(),nums.end());
        int count_max = 0;
        int low = 0, high = 0, n = nums.size();
        for (int high = 0; high < n; ++high) {
            if(nums[high]==mx_ele){
                count_max++;
            }
            while(count_max>=k) {
                if(nums[low]==mx_ele)
                    count_max--;
                low++;
            }
             ans +=  low;
        }
        return ans;
    }
};