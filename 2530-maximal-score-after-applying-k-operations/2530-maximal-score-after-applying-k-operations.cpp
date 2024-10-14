class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        
        long long ans = 0;
        int j = 0;
        for(const auto &i: nums){
            pq.push({i,j++});
        }
        
        while(k--){
            auto top = pq.top();
            pq.pop();
            ans += top.first;
            pq.push({ceil(top.first*1.0/3), top.second});
            nums[top.second] = ceil(top.first*1.0/3);
        }
        return ans;
    }
};