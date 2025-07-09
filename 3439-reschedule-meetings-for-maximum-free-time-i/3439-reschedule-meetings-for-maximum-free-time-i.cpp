class Solution {
private:
    int find_max_free_time(vector<int>& free_times, int k){
        int n = free_times.size();
        ++k;
        int ans = 0, sum = 0;
        for (int i = 0; i < min(k, n); ++i) {
           sum+=free_times[i];
        }
        ans = sum;
        for (int i = k; i < n; ++i) {
            sum += free_times[i] - free_times[i-k];
            ans = max(sum, ans);
        }
        return max(ans, sum);
    }
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> free_times;
        
        if(startTime[0] != 0){ //free_time before
            free_times.push_back(startTime[0]);
        }
        for (int i = 0; i < n-1; ++i) {
            free_times.push_back(startTime[i + 1] - endTime[i]);
        }
        
        if(endTime[n - 1] < eventTime){ // free_time after
            free_times.push_back((eventTime - endTime[n-1]));
        }
        
        
        return find_max_free_time(free_times, k);
    }
};