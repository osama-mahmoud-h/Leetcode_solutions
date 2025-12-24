class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(), capacity.rend());
        int app_sum = accumulate(apple.begin(), apple.end(), 0);
        int m = capacity.size(), i = 0;
        int cur_sum = 0;
        while(i < m and cur_sum < app_sum){
            cur_sum += capacity[i++];
        }

        return i;
    }
};