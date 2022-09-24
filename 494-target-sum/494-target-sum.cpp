class Solution {
public:
 unordered_map<string,int>memo;
int dfs(vector<int>& nums,int st,int target){
    if(st==nums.size() and target==0){
        return 1;
    }
    if(st==nums.size() and target!=0){
        return 0;
    }
    string k = to_string(target)+"O"+to_string(st);
    if(memo.find(k)!=memo.end()){
        return memo[k];
    }
    int puls=dfs(nums,st+1,target+nums[st]);
    int minus=dfs(nums,st+1,target-nums[st]);

    memo[k]=puls+minus;
    return puls+minus;
}
int findTargetSumWays(vector<int>& nums, int target) {
    return dfs(nums,0,target);
}
};