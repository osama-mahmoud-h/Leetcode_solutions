#define ll long long int

class Solution {
private :
    pair<bool,ll> have_zero_and_its_sum(vector<int>& ar){
        bool flag = 0;
        ll sum = 0;
        for (const auto &i: ar) {
            if (!i){
                flag = 1;
                sum++;
            }
            sum += i;
        }
        return {flag, sum};
    }
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<bool,ll>> res{have_zero_and_its_sum(nums1), have_zero_and_its_sum(nums2)};
        sort(res.begin(), res.end(),[&](const pair<bool,ll>&p1, const pair<bool,ll>&p2){
            return p1.second < p2.second;
        });

        if(res[0].second < res[1].second and !res[0].first){
            return -1;
        }

        return max(res[0].second, res[1].second);
    }
};