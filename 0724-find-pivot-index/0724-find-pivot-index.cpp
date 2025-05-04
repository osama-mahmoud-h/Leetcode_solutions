class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        list<int>list;

        int l_sum = 0,r_sum = 0;
        for (int k = 0; k < n; ++k) {
            l_sum += nums[k];
            list.push_back(l_sum);
        }

        for (int k = n-1; k >=0 ; --k) {
            r_sum += nums[k];
            if(list.back() == r_sum){
                return k;
            }
            list.pop_back();
        }

        return -1;
    }
};