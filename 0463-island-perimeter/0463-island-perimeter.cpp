
class Solution {
private:
    bool have_nighbour(vector<vector<int>>& grid, int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0 || j<0 || i>=n || j>=m){
            return 0;
        }
        return grid[i][j]!=0;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = 0;

        vector<pair<int,int>>dir = {{0,1},{1,0},{0,-1},{-1,0}};

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if(!grid[i][j]){
                    continue;
                }
                for (const auto &item: dir){
                    int ni = i + item.first;
                    int nj = j + item.second;
                    if(!have_nighbour(grid,ni,nj)){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};