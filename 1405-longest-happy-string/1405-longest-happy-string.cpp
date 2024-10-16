class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans = "";
        priority_queue<pair<int, char>> pq;

        if (a > 0) pq.push({a, 'a'});
        if (b > 0) pq.push({b, 'b'});
        if (c > 0) pq.push({c, 'c'});

        while (!pq.empty()) {
            auto x = pq.top(); pq.pop();

            // Check if we can add the most frequent character without violating the "no 3 consecutive" rule
            if (ans.size() >= 2 && ans.back() == x.second && ans[ans.size() - 2] == x.second) {
                if (pq.empty()) break; // No valid second character available, so we can't proceed
                auto y = pq.top(); pq.pop();
                ans += y.second; // Add the second most frequent character
                y.first--; // Decrease the count of y
                if (y.first > 0) pq.push(y); // Push back into the queue if there's any remaining

                pq.push(x); // Reinsert the first character since we couldn't use it
            } else {
                // Add up to two occurrences of the most frequent character
                int countToAdd = min(2, x.first);
                for (int i = 0; i < countToAdd; ++i) {
                    ans += x.second;
                }
                x.first -= countToAdd; // Decrease the count of x
                if (x.first > 0) pq.push(x); // Reinsert if any occurrences left
            }
        }

        return ans;
    }
};