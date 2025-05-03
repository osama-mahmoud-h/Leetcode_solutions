class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> ans;
        
        int i = 0, j = 0;
        int n = nums1.size(), m = nums2.size();
        
        while(i<n and j<m){
            if(nums1[i] < nums2[j]){
                i++;
            }else if(nums2[j] < nums1[i]){
                j++;
            }else{
                int cur = nums1[i];
                ans.push_back(nums1[i]);
                while(i<n and cur==nums1[i]){i++;}
                while(j<m and cur==nums2[j]){j++;}
            }
        }
        
        return ans;
    }
};
