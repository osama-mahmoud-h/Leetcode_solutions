class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        // min-heap <ending time , value> .
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        sort(events.begin(), events.end());

        int max_val = 0, max_sum = 0;
        for(auto const&event: events){
            while(!pq.empty() and pq.top().first < event[0]){
                max_val = max(max_val, pq.top().second);
                pq.pop();
            }
            max_sum = max(max_sum, max_val + event[2]);
            pq.push({event[1], event[2]});
        }
        return max_sum;
    }
};