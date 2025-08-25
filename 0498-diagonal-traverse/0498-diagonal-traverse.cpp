
class Solution {
private:
    vector<int> traverse_diagonally_down(vector<vector<int>>& mat,bool flip, int row, int col){
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        for (int i = row, j = col ; i < n and j>=0; ++i, --j) {
            ans.push_back(mat[i][j]);
        }
        if(flip)
            reverse(ans.begin(), ans.end());
        return ans;
    }
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        bool flip = 1;

        for (int j = 0; j < m; ++j) { // upper row start
             vector<int> res = traverse_diagonally_down(mat,flip, 0,j);
             ans.insert(ans.end(), res.begin(), res.end());
            flip =!flip;
        }
        for (int i = 1; i < n; ++i) { // right col start
            vector<int> res = traverse_diagonally_down(mat,flip, i,m-1);
            ans.insert(ans.end(), res.begin(), res.end());
            flip =!flip;
        }

        return ans;
    }
};
