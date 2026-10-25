class Solution {
    public int closedIsland(int[][] grid) {
        int ans=0;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                if(grid[i][j]==0)
                if(dfs(grid,i,j))
                    ans++;
            }
        }
        return ans;
    }
    
    boolean dfs(int[][]ar,int i,int j){
        if(i<0||j<0||i>=ar.length||j>=ar[0].length)
            return false;
        if(ar[i][j]==1)
            return true;
        ar[i][j]=1;
        boolean p1=dfs(ar,i+1,j); 
        boolean p2=dfs(ar,i-1,j);
        boolean p3=dfs(ar,i,j+1);
        boolean p4=dfs(ar,i,j-1);
      //  ar[i][j]=0;
        return p1&&p2&&p3&&p4;
    }
}