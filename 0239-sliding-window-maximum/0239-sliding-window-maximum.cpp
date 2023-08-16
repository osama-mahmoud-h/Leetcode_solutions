
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int,greater<int>>map;
        int n = nums.size();

        vector<int>ans;
        for (int i = 0; i < k; ++i) {
            map[nums[i]]++;
        }

        ans.push_back(map.begin()->first);

        for (int i = 0; i < n-k; ++i) {
            map[nums[i]]--;
            if(map[nums[i]]<=0){
                 map.erase(nums[i]);
            }
            
            map[nums[i+k]]++;
            ans.push_back(map.begin()->first);
        }
        
        return ans;
    }
};