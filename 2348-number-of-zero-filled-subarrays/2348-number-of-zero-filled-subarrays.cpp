#define ll long long int

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        ll ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            ll cnt = 0;
                while (i<n && nums[i]==0){
                    cnt++;
                    i++;
                }
                ans+= (cnt*(cnt+1))/2;
        }
        
        return ans;
    }
};