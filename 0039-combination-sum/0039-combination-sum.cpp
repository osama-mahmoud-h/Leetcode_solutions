class Solution {
public:
      
void recur(vector<int>&nums,vector<vector<int>>&ans,vector<int>&tmp,int st,int target){

    if(target<0){
        return ;
    }
    if(target==0){
        ans.push_back(tmp);
    }
    for (int i = st; i <nums.size() ; ++i) {
        tmp.push_back(nums[i]);
        recur(nums,ans,tmp,i,target-nums[i]);
        tmp.pop_back();
    }

}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<vector<int>>ans;
    vector<int>tmp;

    recur(candidates,ans,tmp,0,target);

    return ans;
  
    }
};