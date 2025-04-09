class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int min_el = *min_element(nums.begin(), nums.end());
        if(min_el < k)
            return -1;
        
        unordered_set<int>set;
        for (const auto &item: nums)
            if(item != k)
                set.insert(item);
        return (int)set.size();
    }
};
