class Solution {
private:
void rotateAroundMainDiagonal(vector<vector<int>>& a) {
    size_t n = a.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            swap(a[i][j], a[j][i]);
        }
    }
}

void rotateAroundVerticalAxis(vector<vector<int>>& a) {
    size_t n = a.size();
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n / 2; ++j) {
            swap(a[i][j], a[i][n - 1 - j]);
        }
    }
}
public:
    void rotate(vector<vector<int>>& matrix) {
        rotateAroundMainDiagonal(matrix);
        rotateAroundVerticalAxis(matrix);
    }
};