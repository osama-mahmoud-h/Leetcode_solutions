class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,list<int>> num_idx;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            num_idx[nums[i]].push_back(i);
        }

        sort(nums.begin(), nums.end());
        int l = 0, h = n-1;
        while(l < h){
            if(nums[l]+nums[h] > target)
                h--;
            else if (nums[l]+nums[h] < target)
                l++;
            else break;    
        }

        return vector<int>{num_idx[nums[l]].front(), num_idx[nums[h]].back()}; 
    }
};