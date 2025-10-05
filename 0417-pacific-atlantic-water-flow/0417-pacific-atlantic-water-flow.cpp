class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {

        vector<vector<int>> ans;
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<bool>> pac(n, vector<bool>(m));
        vector<vector<bool>> atl(n, vector<bool>(m));
        
        // we wil start with those cells which were already connected to oceans
        for (int i = 0; i < n; i++) {

            dfs(heights, pac, i, 0, -1, -1); // first col
            dfs(heights, atl, i, m-1, -1, -1); // last col
        }

        for (int j = 0; j < m; j++) {

            dfs(heights, pac, 0, j, -1, -1); // first row 
            dfs(heights, atl, n - 1, j, -1, -1); // last row
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (pac[i][j] && atl[i][j])
                    ans.push_back({i, j});
            }
        }
        return ans;
    }

    void dfs(vector<vector<int>>& h, vector<vector<bool>>& vis, int i, int j, int oi, int oj) {

        if (i < 0 || i >= h.size() || j<0 || j>=h[0].size() || vis[i][j]) return;
        if (oi >= 0 && oj >=0 && h[i][j] < h[oi][oj]) return;

        vis[i][j] = true;
        dfs(h, vis, i - 1, j, i, j);
        dfs(h, vis, i + 1, j, i, j);
        dfs(h, vis, i, j - 1, i, j);
        dfs(h, vis, i, j + 1, i, j);
    }
};