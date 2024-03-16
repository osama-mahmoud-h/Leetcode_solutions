
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>map;
        map[0] = -1;
        int sum = 0;
        int mx = 0;
        for (int i = 0; i < n; ++i) {
            sum += (nums[i] == 0 ? -1 : 1);
            if(map.count(sum)){
                mx = max(mx,i-map[sum]);
            } else{
                map[sum] = i;
            }
        }
        return mx;
    }
};