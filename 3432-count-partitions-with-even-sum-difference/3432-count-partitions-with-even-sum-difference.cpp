class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int j = n-1 , r_sum = 0, l_sum = 0, cnt = 0;
        l_sum = accumulate(nums.begin(), nums.end(),0);
        while(j>0){
            r_sum += nums[j];
            l_sum -= nums[j--];
            if((r_sum - l_sum)%2==0)
                cnt++; 
        }
        return cnt;
    }
};