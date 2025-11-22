class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(auto const &i : nums){
            int rem = i%3;
            ans += min(3-rem, rem);
        }
        return ans;
    }
};