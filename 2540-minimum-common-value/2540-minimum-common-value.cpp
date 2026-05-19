class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        while(i < n && j<m){
            int val1 = i >=n ? -1 : nums1[i];
            int val2 = j >=m ? -1 : nums2[j];
            if(val1 < val2)
                i++;
            else if(val2<val1)
                j++;    
            else 
                return val1;
        }
        return -1;
    }
};