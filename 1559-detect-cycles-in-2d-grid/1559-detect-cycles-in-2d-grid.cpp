class Solution {
private:
    vector<vector<int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    bool has_cycle(int i, int j,int pi, int pj, vector<vector<char>>& grid,
                   vector<vector<bool>>& visited) {

        int n = grid.size(), m = grid[0].size();
        visited[i][j] = 1;
        for (const auto& dir : dirs) {
            int x = dir[0] + i, y = dir[1] + j;
            if (x < 0 or x >= n or y < 0 or y >= m or grid[x][y] != grid[i][j])
                continue;

            if (!visited[x][y]) {
                if (has_cycle(x, y, i, j, grid, visited))
                    return 1;
            }
            else if (x != pi or y != pj) { // avoid parent cycly
                return 1;
            }

        }
        return 0;
    }

public:
    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j])
                    continue;
                if (has_cycle(i, j,-1,-1, grid, visited)) {
                    //cout << i << "  , " << j << "\n";
                    return 1;
                }
            }
        }
        return 0;
    }
};