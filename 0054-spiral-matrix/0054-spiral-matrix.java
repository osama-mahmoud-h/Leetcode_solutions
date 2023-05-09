class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
         List<Integer> ans=new ArrayList<>();
        int i=0,j=0;
        int n=matrix.length;
        int m=matrix[0].length;
        int cnt=0;
        boolean[][]visited=new boolean[n][m];
        while (cnt<n*m){
            // right
            while (j<m&&!visited[i][j]){
                ans.add(matrix[i][j]);
                visited[i][j]=true;
                cnt++;
                j++;
               // System.out.println(matrix[i][j]+"  ");
            }
            j--;
            i++;
            // down
            while (i<n&&!visited[i][j]){
                ans.add(matrix[i][j]);
                visited[i][j]=true;
                i++;
                cnt++;
            }
            i--;
            j--;
            //left
            while (j>=0&&!visited[i][j]){
                ans.add(matrix[i][j]);
                visited[i][j]=true;
                j--;
                cnt++;
            }
            j++;
            i--;
            //up
            while (i>=0&&!visited[i][j]){
                ans.add(matrix[i][j]);
                visited[i][j]=true;
                i--;
                cnt++;
            }
            i++;
            j++;

          //  System.out.print(cnt+"  ");
        }

        return ans;
    }
}