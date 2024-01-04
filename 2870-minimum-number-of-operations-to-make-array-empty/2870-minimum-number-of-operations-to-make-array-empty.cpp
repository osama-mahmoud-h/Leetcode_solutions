class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(const int &x : nums){
            mp[x]++;
        }

        for (const auto &[key,val] : mp){
            if(val<=1){
                return -1;
            }
            ans += ceil((double)(val) / 3);
        }

        return ans;
    }
};