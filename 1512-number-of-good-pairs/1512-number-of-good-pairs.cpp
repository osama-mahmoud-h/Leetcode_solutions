class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>map;
        for (const auto &item: nums)
            map[item]++;

        int ans = 0;
        for (const auto &item: map)
            ans+= item.second<2 ? 0 : (item.second-1)*(item.second)/2;
        
        return ans;
    }
};