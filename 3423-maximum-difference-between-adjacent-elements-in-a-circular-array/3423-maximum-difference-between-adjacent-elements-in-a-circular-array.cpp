class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx = 0 ,n = nums.size();
        for(int i=0; i<n ;i++){
            int next = nums[(i+1)%n];
            mx = max(mx, abs(nums[i] - next));
        }

        return mx;
    }
};