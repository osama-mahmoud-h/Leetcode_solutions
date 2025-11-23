
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int ans = 0;
        vector<int> ones_rem, twos_rem;
        sort(nums.begin(), nums.end());
        int rem_sum = 0;
        for (const auto &item: nums){
            ans += item;
            if(item%2 == 1)
                ones_rem.push_back(item);
            else if(item%2 == 2)
                twos_rem.push_back(item);
            rem_sum += item%2;
        }
        if(rem_sum%2 == 1){ // either take 1, or 2 and 2
            int mn = INT_MAX;
            if(twos_rem.size()>1)
                mn = min(mn, twos_rem[0] + twos_rem[1]);
            if(ones_rem.size())
                mn = min(ones_rem[0], mn);
            ans -= mn;
        }else if(rem_sum%2 == 2){ // either take 1,1 or 2
            int mn = INT_MAX;
            if(ones_rem.size()>1)
                mn = min(mn, ones_rem[0] + ones_rem[1]);
            if(twos_rem.size())
                mn = min(ones_rem[0], mn);
            ans -= mn;
        }

        return ans;
    }
};
