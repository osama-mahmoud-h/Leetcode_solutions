class Solution {
private:
void traverse_diagonally_down_and_sort(vector<vector<int>>& mat,bool flip, int row, int col){
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;
        for (int i = row, j = col ; i < n and j < m; ++i, ++j) {
            ans.push_back(mat[i][j]);
        }
        sort(ans.begin(), ans.end());
        if(flip)
             sort(ans.end(), ans.begin());

         for (int i = row, j = col , k = 0; i < n and j < m and k<ans.size(); ++i, ++j) {
            mat[i][j] = ans;
        }     
        return ans;
    }
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> ans;

        for (int j = 1; j < m; ++j) { // upper row start
            traverse_diagonally_down_and_sort(mat,0, 0,j);
        }
        for (int i = 0; i < n; ++i) { // right col start
            traverse_diagonally_down_and_sort(mat,1, i,0);
        }

    }
};