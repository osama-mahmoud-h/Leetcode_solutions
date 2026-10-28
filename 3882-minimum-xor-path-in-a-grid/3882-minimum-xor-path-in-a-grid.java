class Solution {
    int [][][]memo;
    private int solve(int[][] grid, int i, int j ,int cost){
        int n = grid.length, m = grid[0].length;
        if(i == n - 1  && j == m - 1)
            return cost ^ grid[i][j];
        if(i >= n || j >= m)
            return Integer.MAX_VALUE;

        if(memo[i][j][cost] != -1)
            return memo[i][j][cost];

        int right = solve(grid, i, j + 1, cost ^ grid[i][j]);
        int down = solve(grid, i + 1, j, cost ^ grid[i][j]);
        return memo [i][j][cost] = Math.min(right, down);
    }
    public int minCost(int[][] grid) {
        memo = new int[grid.length][grid[0].length][1024];
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[0].length; j++){
                Arrays.fill(memo[i][j], -1);
            }
        }
        return solve(grid, 0, 0, 0);
    }
}