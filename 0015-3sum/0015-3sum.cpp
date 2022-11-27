class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

    unordered_map<int,int> map;

    sort(nums.begin(),nums.end());
     
      vector<int>tmp;
   

    for (int i = 0; i < nums.size(); ++i) {
         int j = nums[i];
        map[j]=i;
    }
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size()-2; ++i) {
        for (int j = i+1; j < nums.size()-1; ++j) {

            int sum = 0-(nums[i]+nums[j]);
            
            if(map.find(sum)!=map.end()){
                if(map[sum]>j){
                    vector<int>tmp = {nums[i],nums[j],sum};
                    ans.push_back(tmp);
                }
            }
            if(nums[i]==nums[j]&&nums[i]==sum){break;}
        }
    }
     
        set<vector<int>>set;
       
        for(auto i:ans){
           set.insert(i);
        }
        
        ans.clear();
        
        for(auto i:set){
            ans.push_back(i);
        }

    return ans;
    }
};