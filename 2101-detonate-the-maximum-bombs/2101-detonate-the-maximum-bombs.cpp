
class Solution {
public:
    typedef long long int ll;
    bool inside(ll x0,ll y0, ll x1,ll y1, ll r){
        return sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)) <= r;
    }
    void dfs(vector<vector<int>>&adj,int st,int &cnt, vector<bool>&vis){
        vis[st] = 1;
        for (const auto &item: adj[st]){
            if(!vis[item]){
                dfs(adj,item,++cnt,vis);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {

        int n = bombs.size();
        vector<vector<int>>adj(n);
        
        vector<bool>vis(n,0);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i==j)continue;
                vector<int>p1 = bombs[i] , p2 = bombs[j];

                if(inside(p1[0],p1[1],p2[0],p2[1],p1[2])){
                    adj[i].push_back(j);
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int cnt = 1;
            vis = vector<bool>(n,0);

            dfs(adj,i,cnt,vis);
            ans = max(ans,cnt); 
        }
        return ans;
    }
};
