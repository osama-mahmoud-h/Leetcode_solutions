
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int n = nums.size();
        int l = 0, h = n-1;
        vector<int>ans(2,-1);

        unordered_map<int,vector<int>> map;

       for(int i= 0; i < n; i++){
            map[nums[i]].push_back(i);
        }
         sort(nums.begin(), nums.end());


        while(l<h){
            if(nums[l] + nums[h] > target){
                h--;
            }else if(nums[l] + nums[h] < target){
                l++;
            }else{
                int low_idx = *map[nums[l]].begin();
                int high_idx = *(--map[nums[h]].end());
                return vector<int>{low_idx, high_idx};
            }
        }

        return ans;

    }
};