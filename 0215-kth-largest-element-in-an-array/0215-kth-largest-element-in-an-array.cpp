class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for (const auto &item: nums){
            pq.push(item);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};