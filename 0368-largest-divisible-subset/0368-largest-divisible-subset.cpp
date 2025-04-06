class Solution {
    vector<int>ans;
     vector<int>memo;
private:
    void helper(vector<int>& nums, int idx, int prev, vector<int>& temp){
        if(idx>=nums.size()){
            if(temp.size() > ans.size())
                ans = temp;
            return;
        }
        if((int)temp.size() > memo[idx] and (nums[idx]%prev == 0)){
            memo[idx] = temp.size();         
            temp.push_back(nums[idx]);
            helper(nums, idx+1 , nums[idx], temp);
            temp.pop_back();
        }
        helper(nums, idx+1 , prev, temp);
    }
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>temp;
        memo = vector<int>(nums.size(),-1);
        helper(nums, 0, 1, temp);
        return ans;
    }
};