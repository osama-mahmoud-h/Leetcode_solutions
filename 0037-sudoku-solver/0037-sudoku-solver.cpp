class Solution {
private:
    bool check(vector<vector<char>>& board, int i, int j, char val) {
        // Check row
        for (int col = 0; col < 9; col++) {
            if (board[i][col] == val) return false;
        }

        // Check column
        for (int row = 0; row < 9; row++) {
            if (board[row][j] == val) return false;
        }

        // Check 3x3 sub-grid
        int startRow = (i / 3) * 3;
        int startCol = (j / 3) * 3;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (board[startRow + row][startCol + col] == val)
                    return false;
            }
        }

        return true; 
    }
    bool solveSudoku(vector<vector<char>>& board, int i, int j){
        if(i == 9)
            return true;
        if(j == 9) return solveSudoku(board, i+1, 0);
        if(board[i][j] != '.') return solveSudoku(board, i, j+1);

        for (int k = '1'; k <= '9'; ++k) {
            if(check(board, i, j, k )){
                board[i][j] = k;
                if(solveSudoku(board, i, j+1))
                    return true;
                board[i][j] = '.';
            }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        solveSudoku(board, 0,0);
    }
};