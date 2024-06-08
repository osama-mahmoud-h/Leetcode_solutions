class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int prefix_mod = 0;
        unordered_map<int,int> mod_seen;
        mod_seen[0] = -1;
        
        for(int i = 0; i < nums.size(); i++){
            prefix_mod = (prefix_mod + nums[i]) % k;
            if(mod_seen.find(prefix_mod) != mod_seen.end()){
                if(i - mod_seen[prefix_mod] > 1){
                    return 1;
                }
            }else{
                mod_seen[prefix_mod] = i;
            }
        }
        return 0;
    }
};

