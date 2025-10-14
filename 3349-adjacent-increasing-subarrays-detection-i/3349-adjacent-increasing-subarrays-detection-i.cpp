class Solution {
private:
    int longest_increasing_from(vector<int>& nums, int idx){
        int n = nums.size();
        int sum = 1;
        int mx = 1;
        for (int i = idx; i< n-1; ++i) {
            if(nums[i] < nums[i+1]){
                mx = max(mx, ++sum);
            }else{
                return mx;
            }
        }
       //  cout<<"inc: "<<mx<<"\n";
        return mx;
    }
    int longest_decreasing_from(vector<int>& nums, int idx){
        int n = nums.size();
        int sum = 1;
        int mx = 1;
        for (int i = idx; i>=1 ; --i) {
            if(nums[i] > nums[i-1]){
                mx = max(mx, ++sum);
            }else{
                return mx;
            }
        }
       // cout<<"dec: "<<mx<<"\n";
        return mx;
    }
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int cnt = 1, mx = 1;
        int n = nums.size();
        int cnt_mx = 0;
        for (int i = k-1; i < n-k; ++i) {
            cout<<"i: "<<i<<"\n";
           if(longest_increasing_from(nums, i+1) >= k 
           and longest_decreasing_from(nums, i) >=k)
               return true;
        }
        return false;
    }
};