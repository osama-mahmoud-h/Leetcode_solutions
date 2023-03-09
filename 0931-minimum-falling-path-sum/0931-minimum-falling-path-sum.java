class Solution {
    int [][]memo;
    public int minFallingPathSum(int[][] A) {
         int min=(int)10e7;
        memo=new int[A.length][A.length];
        for(int []r:memo)
            Arrays.fill(r,-1);
        
        for (int i=0;i<A[0].length;i++){
            //for(int []r:memo)
          //  Arrays.fill(r,-1);
                        min=Math.min(min,mini(0,i,A));

        }
            return min;
    }
    int mini(int i,int j,int [][]grid){
        if(j>=grid[0].length||j<0)return 10000;
        if(memo[i][j]!=-1)return memo[i][j];
        if(i+1==grid.length)return grid[i][j];
        int min=10000;
        min=Math.min(min,grid[i][j]+mini(i+1,j,grid));
        min=Math.min(min,grid[i][j]+mini(i+1,j-1,grid));
        min=Math.min(min,grid[i][j]+mini(i+1,j+1,grid));

        return  memo[i][j]=min;
    }
}