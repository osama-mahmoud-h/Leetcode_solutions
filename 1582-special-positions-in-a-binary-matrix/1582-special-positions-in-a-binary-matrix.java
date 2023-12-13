class Solution {
    public int numSpecial(int[][] mat) {
        int count =0;
         for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j <mat[0].length ; j++) {
                int c=0;
                int r=0;
                if(mat[i][j]==1){
                    for(int k=0;k<mat[0].length;k++)
                          if(mat[i][k]==1)c++;
                              for(int x=0;x<mat.length;x++)
                                  if(mat[x][j]==1)r++;
                }
                if(r==1&&c==1){ count++;}
                
            }
        }
 
          
    return count;
    }
}