
class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>cnt(n);
        unordered_map<int,unordered_set<int>>map;
        for (const auto &item: roads){
            int a = item[0], b = item[1];
            cnt[a]++;
            cnt[b]++;
            map[a].insert(b);
            map[b].insert(a);
        }
       
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i==j){
                    continue;
                }
                if(map[i].find(j) != map[i].end()){
                    //cout<<i<<" , "<<j<<"\n";
                    ans = max(cnt[i]+cnt[j]-1,ans);
                } else{
                     ans = max(ans,cnt[i]+cnt[j]);
                }
            }
        }

        return ans;
    }
};
