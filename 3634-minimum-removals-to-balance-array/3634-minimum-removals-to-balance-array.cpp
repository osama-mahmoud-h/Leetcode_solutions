class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int low = 0, n = nums.size(), h = 0;
        
        while(h < n){ // [1,2,6,9]
            while(low < h and nums[h] > k * nums[low]){
                low++;
            }
            h++;
            ans = max(ans, h-low);    
        }
        //cout<<"ans: "<<ans<<"\n";
        return n - ans;
    }
};