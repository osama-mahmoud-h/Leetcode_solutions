class Solution {
public:
  void backtrack(vector<int>& nums,vector<vector<int>>&ans,vector<int>&tmp,int st){
    ans.push_back(tmp);
      cout<<st<<"\n";
    for (int i = st; i <nums.size() ; ++i) {
        if(i==st || nums[i]!=nums[i-1]){
            tmp.push_back(nums[i]);
            backtrack(nums,ans,tmp,i+1);
            tmp.pop_back();
        }
    }
}
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    vector<int>tmp;
    backtrack(nums,ans,tmp,0);
    return ans;
}
};