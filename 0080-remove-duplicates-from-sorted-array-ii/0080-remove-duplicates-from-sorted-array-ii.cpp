class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for (int i = 0; i < n; ) {
            int cur = nums[i], freq = 0;
            while(i<n and cur==nums[i]){
                i++;
                freq++;
            }
            if(freq > 1){
                nums[k++] = cur;
            }
            nums[k++] = cur;
        }

        return k;
    }
};