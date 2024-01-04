class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for(const int &x : nums){
            mp[x]++;
        }

        for (const auto &item : mp){
            int count = item.second;
            if(count<=1){
                return -1;
            }
            ans += count/3;
            if(count%3 != 0){
                ans++;
            } 
        }

        return ans;
    }
};