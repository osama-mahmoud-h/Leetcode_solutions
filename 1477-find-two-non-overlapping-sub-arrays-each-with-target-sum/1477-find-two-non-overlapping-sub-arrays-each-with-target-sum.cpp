class Solution {
private:
    vector<pair<int, int>> subarraysWithSum(vector<int>& arr, int target) {
        vector<pair<int, int>> result;
        if (target <= 0)
            return result; // positive elements can't sum to <= 0

        long long sum = 0;
        int left = 0;
        for (int right = 0; right < (int)arr.size(); ++right) {
            sum += arr[right];
            while (sum > target) // shrink until sum <= target
                sum -= arr[left++];
            if (sum == target)
                result.push_back({left, right});
        }
        return result;
    }
    int minLenFrom(const vector<int>& best, int idx) {
        if (idx < 0 || idx >= (int)best.size())
            return -1; // out of range
        return best[idx] == INT_MAX ? -1 : best[idx];
    }

public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<pair<int, int>> intervals = subarraysWithSum(arr, target);
        vector<int> intervals_length(n + 1, INT_MAX); // [n] = empty suffix

        for (auto [s, e] : intervals)
            intervals_length[s] = min(intervals_length[s], e - s + 1);

        for (int i = n - 1; i >= 0; --i)
            intervals_length[i] =
                min(intervals_length[i], intervals_length[i + 1]);


        // ---- best pair of non-overlapping intervals ----
        int ans = INT_MAX;
        for (auto [s, e] : intervals) {
            int right =
                intervals_length[e + 1]; // shortest interval starting after e
            if (right == INT_MAX)
                continue; // nothing fits to the right
            ans = min(ans, (e - s + 1) + right);
        }
       // cout << "min total length: " << (ans == INT_MAX ? -1 : ans) << "\n";
        return ans == INT_MAX ? -1 : ans;
    }
};