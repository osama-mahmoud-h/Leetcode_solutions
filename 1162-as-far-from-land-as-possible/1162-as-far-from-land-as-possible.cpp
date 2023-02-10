class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
    int ans = -1;
    vector<pair<int,int>>lands;
    vector<pair<int,int>>water;

        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                int cell = grid[i][j];
                if(cell==0){ //water
                    water.push_back({i,j});
                }else{//land
                    lands.push_back({i,j});
                }
            }
        }

    if(lands.size()==0||water.size()==0){
        return -1;
    }

    for(auto w:water){
        int mx = 1e5;
        for (auto l:lands) {
            int dist = abs(w.first-l.first)+ abs(w.second-l.second);
            mx = min(mx,dist);
        }
        ans = max(ans,mx);
    }
    
       return ans;
    }
};