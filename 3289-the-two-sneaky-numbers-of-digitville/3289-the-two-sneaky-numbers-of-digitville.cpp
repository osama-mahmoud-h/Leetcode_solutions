class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        int cnt_zero = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                nums[i] = n;
                cnt_zero++;
            }
        }

        for(int i = 0; i < n; i++){
            int cur_idx = abs(nums[i]);
            if(cur_idx == n)
                continue;
            if(nums[cur_idx] < 0 ){
                ans.push_back(cur_idx);
            }
            nums[cur_idx] = - abs(nums[cur_idx]);
        }

        if(cnt_zero > 1)
            ans.push_back(0);

        return ans;
    }
};