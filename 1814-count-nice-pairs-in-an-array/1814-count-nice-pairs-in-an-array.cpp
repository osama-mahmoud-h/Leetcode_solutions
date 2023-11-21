class Solution {
private:
    int rev(int num){
        string numstr = to_string(num);
        reverse(numstr.begin(),numstr.end());
        return stoi(numstr);
    }
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>cnt;
        int ans = 0, MOD = 1e9 + 7;
        for (const auto &item: nums){
            int diff = item - rev(item);
            if(cnt.find(diff)!=cnt.end()){
                ans  = (ans +cnt[diff] )%MOD;
            }
            cnt[diff]++;
        }
        return ans;
    }
};
