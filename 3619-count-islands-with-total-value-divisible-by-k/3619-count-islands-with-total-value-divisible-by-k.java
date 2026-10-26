class Solution {
    private long sumIsland(int[][] island, int i,int j){
        int n = island.length, m = island[0].length;
         if(i < 0 || j<0 || i >= n || j >= m || island[i][j] == 0)
            return 0;

        int cur = island[i][j];
        island[i][j] = 0;

        long p1 = sumIsland(island,i+1,j); 
        long p2 = sumIsland(island,i-1,j);
        long p3 = sumIsland(island,i,j+1);
        long p4 = sumIsland(island,i,j-1);
        return cur + p1 + p2 + p3 + p4;
    }  
    public int countIslands(int[][] grid, int k) {
        int cnt = 0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j] != 0){
                    long sum = sumIsland(grid,i,j);
                    // System.out.println("Sum of island at (" + i + ", " + j + ") is: " + sum); 
                    if(sum % k == 0)
                        cnt++;
                }
            }
        }
        return cnt;
    }
}
