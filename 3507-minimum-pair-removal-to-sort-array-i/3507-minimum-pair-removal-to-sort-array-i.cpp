class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ans = 0;
        list<int> lst(nums.begin(), nums.end()); // linked list for O(1) erase

        auto isSorted = [](const list<int>& lst) {
            if (lst.size() <= 1) return true;
            auto it = lst.begin();
            auto nextIt = next(it);
            for (; nextIt != lst.end(); ++it, ++nextIt) {
                if (*it > *nextIt) return false;
            }
            return true;
        };

        while (!isSorted(lst)) {
            // find leftmost minimum sum pair
            int min_sum = INT_MAX;
            auto first = lst.begin();
            auto it = lst.begin();
            while (next(it) != lst.end()) {
                int s = *it + *next(it);
                if (s < min_sum) {
                    min_sum = s;
                    first = it;
                }
                it++;
            }

            // replace pair with sum
            *first = min_sum;
            lst.erase(next(first));
            ans++;
        }

        return ans;
    }
};
