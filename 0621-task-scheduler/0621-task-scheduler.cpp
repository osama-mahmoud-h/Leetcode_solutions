
class Solution {

public:
    int leastInterval(vector<char>& tasks, int n) {
        //create priority queue of pair<char,int>, ordered by pair.value
        priority_queue<int>pq;
        unordered_map<char, int> map;
        for (const auto &task: tasks) {
            map[task]++;
        }
        int ans = 0;
        for (const auto &item: map) {
            pq.push(item.second);
        }

        while(!pq.empty()) {
            vector<int>temp;
            int taskCount = 0;
            for (int i = 0; i < n+1 && !pq.empty(); ++i) {
                if(pq.top()>1)
                    temp.push_back(pq.top()-1);
                taskCount++;
                pq.pop();
            }
            for (const auto &item: temp) {
                    pq.push(item);
            }
            ans += pq.empty() ? taskCount : n+1;


        }

        return ans;

    }
};