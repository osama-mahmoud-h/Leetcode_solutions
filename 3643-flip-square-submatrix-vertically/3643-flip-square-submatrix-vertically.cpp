class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int n = grid.size(), m = grid[0].size();
        for (int i = y; i < y+k; i++){
            //cout<<"i: "<<i<<"\n";
            vector<int>temp;
            for(int j = x; j<x+k ; j++){
                temp.push_back(grid[j][i]);
            }
            reverse(temp.begin(), temp.end());
            for(int j = x, p = 0; j<x+k ; j++){
                grid[j][i] = temp[p++]; //.push_back();
            }
        }
        return grid;
    }
};