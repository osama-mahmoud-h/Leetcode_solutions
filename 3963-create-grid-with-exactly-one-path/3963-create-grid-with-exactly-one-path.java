class Solution {
    public String[] createGrid(int m, int n) {
        char[][] grid = new char[m][n];
        Arrays.fill(grid[0], '.');

        for (int i = 1; i < m; i++) {
            Arrays.fill(grid[i], '#');
            grid[i][n-1] = '.';
        }
        String[] result = new String[m];
        for (int i = 0; i < m; i++) {
            result[i] = new String(grid[i]);
        }
        return result;
    }
}

/**
["...","##."]
 */