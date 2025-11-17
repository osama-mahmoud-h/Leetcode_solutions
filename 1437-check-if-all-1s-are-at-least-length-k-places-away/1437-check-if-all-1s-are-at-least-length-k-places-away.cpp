class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int prev_1 = -(n+1);
        for(int i = 0; i<n; i++){
            if(nums[i] == 1){
                if( (i - prev_1) <= k)
                    return 0;
                prev_1 = i;
            }
        }
        return 1;
    }
};