class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>pq;
        
        long long ans = 0;
        for(const auto &i: nums){
            pq.push(i);
        }
        
        while(k--){
            auto top = pq.top();
            pq.pop();
            ans += top;
            pq.push(ceil(top/3.0));
        }
        return ans;
    }
};