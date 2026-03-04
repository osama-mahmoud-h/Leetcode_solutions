class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>rows(mat.size(), 0), cols( mat[0].size(), 0);
        int ans = 0; 
        for(int i = 0; i < mat.size(); ++i){
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j]){
                    rows[i]++, cols[j]++;
                }
            }
        }

        for(int i = 0; i < mat.size(); ++i){
            for(int j = 0; j < mat[0].size(); j++){
                if(rows[i] == 1 and cols[j] == 1 and mat[i][j]){
                    ans++;
                }
            }
        }

        return ans; 
    }
};