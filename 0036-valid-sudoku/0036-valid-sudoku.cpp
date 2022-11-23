class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
          for (int i = 0; i < 9; ++i) {
        //check every col is unique
        unordered_set<int>cols;
        for (int j = 0; j < 9; ++j) {
            if( cols.count(board[j][i])>0){
                return false;
            }
           if(board[j][i]!='.') cols.insert(board[j][i]);
        }

        //check if every row is unique
        unordered_set<int>rows;
        for (int j = 0; j < 9; ++j) {
            if(rows.count(board[i][j])>0){
                return false;
            }
            if(board[i][j]!='.') rows.insert(board[i][j]);
        }
    }

    //check every subgrid is unique
    for (int i = 0; i <9 ; i+=3) {
        for (int j = 0; j < 9; j+=3) {
            unordered_set<int>cell;
            for (int k = i; k <i+3 ; ++k) {
                for (int l = j; l <j+3 ; ++l) {
                    if(cell.count(board[k][l])>0){
                        return false;
                    }
                    if(board[k][l]!='.') cell.insert(board[k][l]); 
                }
            }
        }
    }
    return true; 
    }
};