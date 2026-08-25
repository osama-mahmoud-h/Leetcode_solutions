class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(const auto &i: nums){
            set.insert(i);
        }
        for(int i = 1; i<=101 ;i++){
            if(!set.count(i*k)){
                return k*i;
            }
            
        }
        return k;
    }
};