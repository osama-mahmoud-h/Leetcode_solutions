class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size(), _xor = 0, _or = 0;
        for(const auto &i : nums ){
            _xor ^= i;
            _or |= i;
        } 
        if(_or == 0)
            return 0;
        return _xor == 0 ? --n : n;
    }
};