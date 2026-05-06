class Solution {
private:
    vector<vector<char>> rotateRight90(const vector<vector<char>>& boxGrid) {
    int m = boxGrid.size();
    int n = boxGrid[0].size();

    vector<vector<char>> rotated(n, vector<char>(m));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            rotated[j][m - 1 - i] = boxGrid[i][j];
        }
    }

    return rotated;
}
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size(), m = boxGrid[0].size();
        for(int i = 0; i<n; i++){
            int h = m-1, l = m-1;
            while(l >= 0){
                char cur = boxGrid[i][l];
                if(cur== '*'){//obstacle
                    h = --l;
                }else if(cur == '#') {//stone
                    boxGrid[i][l--] = '.';
                    boxGrid[i][h--] = '#';
                }else{//empty
                 l--;
                }
                
            }
        }

        return rotateRight90(boxGrid); 
    }
};