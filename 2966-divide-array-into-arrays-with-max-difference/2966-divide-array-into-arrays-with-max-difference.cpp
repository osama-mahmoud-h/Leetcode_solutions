class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int>tmp;
        for (const auto &item: nums){
            tmp.push_back(item);

            if(tmp.size()==3){
                if(tmp[2]-tmp[0]>k){
                   return {};
                }
                ans.push_back(tmp);
                tmp.clear();
            }
        }
        return ans;
    }
};