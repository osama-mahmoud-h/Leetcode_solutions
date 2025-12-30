
class Solution {
public:
    bool isMagic(vector<vector<int>>& a) {
        // Magic square must have center = 5
        if (a[1][1] != 5) return false;
        
        unordered_set<int> nums;
        int sum = 15;  // Magic constant for 3x3
        
        // Check all rows, columns, diagonals sum to 15
        for (int i = 0; i < 3; i++) {
            int rowSum = a[i][0] + a[i][1] + a[i][2];
            int colSum = a[0][i] + a[1][i] + a[2][i];
            if (rowSum != sum || colSum != sum) return false;
        }
        
        // Check diagonals
        if (a[0][0] + a[1][1] + a[2][2] != sum) return false;
        if (a[0][2] + a[1][1] + a[2][0] != sum) return false;
        
        // Check all numbers are unique 1-9
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                int num = a[i][j];
                if (num < 1 || num > 9) return false;
                nums.insert(num);
            }
        }
        
        return nums.size() == 9;  // All 1-9 exactly once
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        if (rows < 3 || cols < 3) return 0;
        
        int count = 0;
        vector<vector<int>> sub(3, vector<int>(3));
        
        for (int i = 0; i <= rows - 3; i++) {
            for (int j = 0; j <= cols - 3; j++) {
                // Extract subgrid
                for (int k = 0; k < 3; k++) {
                    for (int f = 0; f < 3; f++) {
                        sub[k][f] = grid[i + k][j + f];
                    }
                }
                if (isMagic(sub)) count++;
            }
        }
        
        return count;
    }
};