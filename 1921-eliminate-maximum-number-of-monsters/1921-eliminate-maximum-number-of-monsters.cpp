class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<float>time(n);
        for (int i = 0; i < n; ++i) {
            time[i] = dist[i]*1.0/speed[i];
        }
        sort(time.begin(),time.end());
        
        int elapsedTime = 0, i = 0, ans = 0;
      
        while(i<n){
           // cout<<time[i]-elapsedTime<<"\n";
            if(time[i++]-elapsedTime <= 0)
                break;
            elapsedTime++;
            ans++;
        }
        return ans;
    }
};