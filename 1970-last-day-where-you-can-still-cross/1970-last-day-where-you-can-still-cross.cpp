class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        vector<vector<int>> mat(row, vector<int>(col, 0));
        vector<vector<int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

        auto canCross = [&](int day) -> bool {
            vector<vector<int>> grid(row, vector<int>(col, 0));
            for (int i = 0; i <= day; i++) {
                int r = cells[i][0]-1;
                int c = cells[i][1]-1;
                grid[r][c] = 1; // water
            }

            queue<pair<int,int>> q;
            vector<vector<bool>> visited(row, vector<bool>(col,false));

            // Start from all land cells in top row
            for (int c = 0; c < col; c++) {
                if (grid[0][c] == 0) {
                    q.push({0,c});
                    visited[0][c] = true;
                }
            }

            while (!q.empty()) {
                auto [r,c] = q.front(); q.pop();
                if (r == row-1) return true; // reached bottom
                for (auto& d : dirs) {
                    int nr = r + d[0], nc = c + d[1];
                    if (nr >= 0 && nr < row && nc >= 0 && nc < col &&
                        grid[nr][nc] == 0 && !visited[nr][nc]) {
                        visited[nr][nc] = true;
                        q.push({nr,nc});
                    }
                }
            }
            return false;
        };

        int left = 0, right = cells.size()-1;
        int ans = 0;

        // Binary search over days
        while (left <= right) {
            int mid = left + (right-left)/2;
            if (canCross(mid)) {
                ans = mid+1; // last day you can cross
                left = mid+1;
            } else {
                right = mid-1;
            }
        }

        return ans;
    }
};
