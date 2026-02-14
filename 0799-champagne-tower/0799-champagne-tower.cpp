class Solution {
    void printMatrix(const vector<vector<double>>& rows) {
        for (const auto& row : rows) {
            for (double value : row) {
                cout << value << " ";
            }
            cout << endl;
        }
    }

public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> rows;
        rows.push_back(vector<double>(1, poured * 1.0));
        for (int i = 1; i <= query_row; ++i) {
            vector<double> row(i + 1, 0);
            for (int j = 0; j < i + 1; ++j) {
                if (j == 0) {
                    // cout << "j==0 , i: " << i << " , val: " << rows[i - 1][0]
                    //      << ", poured from up " << (rows[i - 1][0] > 1.0)
                    //      << " ,with " << (rows[i - 1][0] / 2.0 - 1.0) << "\n";
                    row[j] = rows[i - 1][0] > 1.0 ? (rows[i - 1][0] - 1.0) / 2.0
                                                  : 0.0;
                } else if (j == i) {
                    row[j] = rows[i - 1][j - 1] > 1.0
                                 ? (rows[i - 1][j - 1] - 1.0) / 2.0
                                 : 0.0;
                } else {
                    double left = rows[i - 1][j - 1];
                    double right = rows[i - 1][j];

                    double overflow = 0.0;
                    if (left > 1.0)
                        overflow += (left - 1.0) / 2.0;
                    if (right > 1.0)
                        overflow += (right - 1.0) / 2.0;
                    row[j] = overflow;
                }
            }
            rows.push_back(row);
        }
        printMatrix(rows);
        return min(1.0, rows[query_row][query_glass]);
    }
};