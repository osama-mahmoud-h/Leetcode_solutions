class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans;
        unordered_map<int,int> map;
        for (const auto &item: nums1){
            int key = item[0], val = item[1];
            map[key] = val;
        }

        for (const auto &item: nums2){
            int key = item[0], val = item[1];
            if(map.find(key)!=map.end()){
                map[key] += val;
                continue;
            }
            map[key] = val;
        }

        for (const auto &item: map){
            ans.push_back({item.first, item.second});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
