class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for (const auto &item: nums1){
            freq[item]++;
        }
        for (const auto &item: nums2){
            if(freq.find(item)!=freq.end() and freq[item]>0){
                ans.push_back(item);
                freq[item]--;
            }
        }
        return ans;
    }
};