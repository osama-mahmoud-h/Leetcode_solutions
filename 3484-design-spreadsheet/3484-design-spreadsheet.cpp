
class Spreadsheet {
private:
    vector<vector<int>>sheet;
    pair<int,int> get_parsed_row_col(string cell_name){
        int n = cell_name.length();
        return {stoi(cell_name.substr(1,n-1)) - 1, cell_name[0]-'A'};
    }
public:
    Spreadsheet(int rows) {
        sheet = vector<vector<int>>(rows,vector<int>(26, 0));
    }

    void setCell(string cell, int value) {
        pair<int,int>row_col = get_parsed_row_col(cell);
        sheet[row_col.first][row_col.second] = value;
    }

    void resetCell(string cell) {
        setCell(cell, 0);
    }

     int getValue(string formula) {
        int n = formula.size();
        formula = formula.substr(1, --n);
        int plus_idx = formula.find("+");
        auto left = formula.substr(0,plus_idx);
        auto right = formula.substr(plus_idx+ 1 , n - plus_idx -1 );

        int left_val = 0;
        if(isalpha(left[0])){
            pair<int,int>row_col = get_parsed_row_col(left);
            left_val = sheet[row_col.first][row_col.second];
        }else left_val = stoi(left);

        int right_val = 0;
        if( isalpha(right[0])){
            pair<int,int>row_col = get_parsed_row_col(right);
            right_val = sheet[row_col.first][row_col.second];
        }else right_val = stoi(right);

        return right_val + left_val;
    }
};
