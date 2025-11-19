class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int> set;

        for(auto const &i : nums)
            set.insert(i);

        while(set.count(original))
            original *= 2;
        
        return original;
    }
};