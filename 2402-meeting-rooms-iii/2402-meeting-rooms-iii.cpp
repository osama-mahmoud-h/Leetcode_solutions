class Solution {
private:
    using Item = pair<int, vector<int>>;
    struct Compare {
        bool operator()(const Item& a, const Item& b) const {
            // 1- Empty vector -->  highest priority
            if (a.second.empty() && b.second.empty())
                return a.first > b.first;   // smaller key first

            if (a.second.empty())
                return false;               // a has higher priority

            if (b.second.empty())
                return true;                // b has higher priority

            // 2. Compare by last value of vector
            int lastA = a.second.back();
            int lastB = b.second.back();

            if (lastA != lastB)
                return lastA > lastB;       // larger last value first

            // 3. Tie-break by smaller key
            return a.first > b.first;
        }
    };
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        int ans = 0, mx_hold = 0;
        sort(meetings.begin(), meetings.end());

        priority_queue<Item, vector<Item>, Compare> pq;
        for (int i = 0; i < n; ++i){
            pq.push({i, {}});
        }

        for (const auto &meeting: meetings){
            auto [room, ending_times] = pq.top();
            // cout<<"room: "<<room<<"\n";
            // for(auto & t :  ending_times){
            //     cout<<t<<", ";
            // }
            // cout<<"\n";
            pq.pop();
            if(ending_times.empty()){
                ending_times.push_back(meeting[1]);
            }else{
                int meeting_interval = meeting[1] - meeting[0];
                int cur_meeting_end_time = ending_times.back();
                cur_meeting_end_time = max(cur_meeting_end_time, meeting[0]);
                ending_times.push_back(cur_meeting_end_time + meeting_interval);
            }
            pq.push({room, ending_times});

        }

        while (!pq.empty()) {
            auto [room, vec] = pq.top();
            pq.pop();

            if((int)vec.size() > mx_hold){
                mx_hold = vec.size(), ans = room;
            }else if((int)vec.size() == mx_hold){
                ans = min(ans, room);
            }
                

            // cout << "room: " << room << ", Vector: ";
            // if (vec.empty()) {
            //     cout << "empty";
            // } else {
            //     cout << "[ ";
            //     for (int x : vec) cout << x << " ";
            //     cout << "]";
            // }

            // cout << endl;
        }
        return ans;
    }
};
