class Solution {
public:
   
    unordered_set<int>set2;
void backtrack(vector<int>&nums,vector<vector<int>>&ans,vector<int>&tmp,unordered_set<int>&set,int st){
 
    if(tmp.size()==nums.size()){
        ans.push_back(tmp);
    }

    for (int i = 0; i < nums.size(); ++i) {
        if(i>0&&set.find(i-1)==set.end()&&nums[i]==nums[i-1]){
            continue;
        }
            if(set.find(i)==set.end()){
                tmp.push_back(nums[i]);
                set.insert(i);
                backtrack(nums,ans,tmp,set,i+1);
                tmp.pop_back();
                set.erase(i);
            }
        
    }
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> tmp;
    unordered_set<int> set;
    
    sort(nums.begin(),nums.end());
    
    backtrack(nums,ans,tmp,set,0);
    
    return ans;
}
};