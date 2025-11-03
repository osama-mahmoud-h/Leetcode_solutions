class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int n = colors.length();
        for(int i = 0; i< n; i++){
            char cur = colors[i];
            int cnt = 0, mx = 0, sum = 0;
            while(i<n and cur==colors[i]){
                cnt++;
                mx = max(mx, neededTime[i]);
                sum+=neededTime[i];
                i++;
            }
            if(cnt<2){
                continue;
            }
            ans += sum-mx;
        }
        return ans;
    }
};