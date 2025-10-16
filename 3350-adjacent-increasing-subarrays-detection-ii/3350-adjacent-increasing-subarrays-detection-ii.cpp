class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        vector<int>subs;
        int n = nums.size();
        int ans = 1;
        
        for (int i = 0; i < n; ++i) {
            int cnt = 1;
            while (i < n-1 and nums[i] < nums[i+1]){
                i++;
                cnt++;
            }
            subs.push_back(cnt);
        }

        // for (const auto &item: subs){
        //     cout<<item<<" , ";
        // }cout<<"\n";
        
        ans = max(ans, subs[0]/2);
        for (int i = 0; i < subs.size()-1; ++i) {
            ans = max({ans, subs[i]/2, subs[i+1]/2, min(subs[i],subs[i+1])});
        }

        return ans;
    }
};