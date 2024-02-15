
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        sort(nums.begin(),nums.end());
        vector<long long>prefix(n,0);
        prefix[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            prefix [i] = prefix[i-1] + nums[i];
        }

        for(int i = n-1; i>=2; i--){
            if(prefix[i-1] > nums[i]){
                return prefix[i];
            }
        }
        return -1;
    }
};
