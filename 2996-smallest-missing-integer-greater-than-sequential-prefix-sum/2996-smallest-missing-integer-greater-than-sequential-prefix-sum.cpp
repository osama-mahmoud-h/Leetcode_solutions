class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0], n = nums.size();
        for (int i = 1;i<n; i++){
            if(nums[i] - nums[i-1] != 1)
                break;
            sum += nums[i];
        }
        unordered_set<int>set(nums.begin(), nums.end());
        

        for (int i = sum; i<=1275; i++ ){
            if(i == nums[0])
                continue;
            
            if(!set.count(i))    
                return i;
        }
        return sum;
    }
};