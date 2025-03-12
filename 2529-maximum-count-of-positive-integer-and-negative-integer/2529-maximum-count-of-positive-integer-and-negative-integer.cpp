
class Solution {
private:
    int find_less_pos_idx(vector<int>&nums){
        int n = nums.size();
        int low = 0, high = n;

        while (low < high){
            int mid = (low + high)/2;
            if(nums[mid]<=0){
                low = mid+1;
            }else{
                high = mid;
            }
        }
        return low;
    }
    int find_less_neg_idx(vector<int>& nums){
        int n = nums.size();
        int low = 0, high = n;
        while(low < high){
            int mid = (low + high)/2;
            if(nums[mid] >=0 ){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        return max(n-find_less_pos_idx(nums), find_less_neg_idx(nums));
    }
};