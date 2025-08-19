class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int>freq;
        int min_val = INT_MAX;
        for (int i = 0; i < basket1.size(); ++i) {
            freq[basket1[i]]++;
            freq[basket2[i]]--;
            min_val = min({min_val, basket1[i], basket2[i]});
        }

        vector<int>swapable_nums;
        for (const auto &[num,cnt]: freq){
            if(cnt%2 !=0 ){
                return -1;
            }
            for (int i = 0; i < abs(cnt)/2 ; ++i) {
                swapable_nums.push_back(num);
            }
        }

        sort(swapable_nums.begin(), swapable_nums.end());
        
        long long int ans = 0;

        for (int i = 0; i < swapable_nums.size() / 2; ++i) {
            ans += min(min_val * 2, swapable_nums[i]); 
            
        }

       return ans;
    }
};