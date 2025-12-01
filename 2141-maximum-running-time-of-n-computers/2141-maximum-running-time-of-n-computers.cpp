class Solution {
private:
    bool can_running_in_time( vector<int>& batteries,int n, int m, long long rem_sum, long long max_time){
        for (int i = m-n; i < m; ++i) {
            if(batteries[i] >= max_time)
                continue;
            rem_sum -= (max_time - batteries[i]);
        }
        //cout<<"max_time: "<<max_time<<" , rem_sum: "<<rem_sum<<"\n";
        return rem_sum >= 0;
    }
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        int m = batteries.size();
        sort(batteries.begin(), batteries.end());
        if(m==n)
            return batteries[0];
        long long rem_sum = 0;
        for (int i = 0; i < m-n; ++i) {
            rem_sum += batteries[i];
        }
        //cout<<"remSum: "<<rem_sum<<"\n";
        long long l = 1, h = 1e15;
        while(l<h){
            long long mid = l + (h - l) / 2;
            if(can_running_in_time(batteries, n, m, rem_sum, mid)){
                l = mid+1;
            }else{
                h = mid;
            }
        }
        return l-1;
    }
};