class Solution {
    int max(int...a){
        int ans=0;
        for(int n:a)
            ans=Math.max(n,ans);
        return ans;
    }
    public int getMaximumGold(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int ans =0;
            boolean [][]visited=new boolean[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    //  boolean [][]visited=new boolean[n][m];
                 //   if(grid[i][j]!=0){
                       // int path=;
                        ans=Math.max(ans,goldP(grid,visited,i,j));
                      //  System.out.println(path);
                   // }
                }
            }
                return ans;
    }
    int goldP(int [][]ar,  boolean [][]visited,int i,int j){
      
        if(i<0||j<0||i>=ar.length||j>=ar[0].length||ar[i][j]==0||visited[i][j]){
            return 0;
        }
            visited[i][j]=true;
        int p1=goldP(ar,visited,i+1,j);
        int p2=goldP(ar,visited,i-1,j);
        int p3=goldP(ar,visited,i,j+1);
        int p4=goldP(ar,visited,i,j-1);
         visited[i][j]=false;
        return ar[i][j]+max(p1,p2,p3,p4);
    }
}