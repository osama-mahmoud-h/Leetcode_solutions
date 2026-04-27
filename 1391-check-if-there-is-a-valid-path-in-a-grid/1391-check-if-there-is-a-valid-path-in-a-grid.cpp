class Solution {
private:
enum Dir { UP, DOWN, LEFT, RIGHT };

vector<pair<int,int>> dxy = {
    {-1, 0}, // UP
    {1, 0},  // DOWN
    {0, -1}, // LEFT
    {0, 1}   // RIGHT
};

unordered_map<int, unordered_map<int, vector<int>>> connect = {
    {1, {
        {LEFT,  {1, 4, 6}},
        {RIGHT, {1, 3, 5}}
    }},
    {2, {
        {UP,    {2, 3, 4}},
        {DOWN,  {2, 5, 6}}
    }},
    {3, {
        {LEFT,  {1, 4, 6}},
        {DOWN,  {2, 5, 6}}
    }},
    {4, {
        {RIGHT, {1, 3, 5}},
        {DOWN,  {2, 5, 6}}
    }},
    {5, {
        {LEFT,  {1, 4, 6}},
        {UP,    {2, 3, 4}}
    }},
    {6, {
        {RIGHT, {1, 3, 5}},
        {UP,    {2, 3, 4}}
    }}
};
   vector<pair<int,int>> nextMoves(int i, int j, vector<vector<int>>& grid) {
    vector<pair<int,int>> res;

    int n = grid.size(), m = grid[0].size();
    int type = grid[i][j];

    for (auto& [dir, allowed] : connect[type]) {
        int ni = i + dxy[dir].first;
        int nj = j + dxy[dir].second;

        if (ni < 0 || nj < 0 || ni >= n || nj >= m) continue;

        int nextType = grid[ni][nj];

        // check if nextType is allowed
        for (int t : allowed) {
            if (t == nextType) {
                res.push_back({ni, nj});
                break;
            }
        }
    }

    return res;
}
    bool dfs(int i, int j, vector<vector<int>>& grid,
             vector<vector<bool>>& visited) {
        int n = grid.size(), m = grid[0].size();
        if (i == n - 1 and j == m - 1)
            return 1;
        visited[i][j] = 1;    
        vector<pair<int,int>> _nextMoves = nextMoves(i, j, grid);
        bool can_pass = 0;
        for(auto const&move: _nextMoves ){
            int xi = move.first , yj =move.second;
            if(!visited[xi][yj]){
                if(dfs(xi, yj, grid, visited))
                    return 1;
            }
        }

        return 0;
    }

public:
    bool hasValidPath(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m,0));
       return dfs(0,0,grid, visited);
    }
};