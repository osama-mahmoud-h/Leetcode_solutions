class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
       
        int n = nums.size();
        
        int high = 1<<n;
        vector<vector<int>> ans;
        unordered_set<string>set;
        
        for(int i=3;i< high;i++){
            if(__builtin_popcount(i)<2){
                continue;
            }
            int shft = 1;
            int idx = 0;
            bool valid = true;
            vector<int> tmp;
            string str="";
            
            while(shft<=i){
                if(shft&i){
                    if(tmp.size()&&tmp.back()>nums[idx]){
                        valid=0;
                        break;
                    }
                    tmp.push_back(nums[idx]);
                    str+=to_string(nums[idx])+"_";
                }
                idx ++;
                shft <<=1;
            }
            if(valid && set.count(str)==0){
                ans.push_back(tmp);
                set.insert(str);
            }
            
        }
        return  ans;
    }
};