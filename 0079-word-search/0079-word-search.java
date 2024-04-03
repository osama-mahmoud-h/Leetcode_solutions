class Solution {
     boolean V[][];
    public boolean exist(char[][] board, String word) {
         V=new boolean[board.length][board[0].length];
        for(int i=0;i<board.length;i++){
            for(int j=0;j<board[0].length;j++){
                
                if(word.charAt(0)==board[i][j]&&find(board,word.toCharArray(),0,i,j,V))
                    return true;
            }
        }
        return false;
    }
    boolean find(char[][] board, char[]ch,int cur,int i,int j,boolean[][]V){
        int n= board.length;
        int m= board[0].length;
        if(cur==ch.length)return true;
        if(i>=n||i<0||j>=m||j<0||ch[cur]!=board[i][j]||V[i][j])return false;
        V[i][j]=true;
        boolean p1=false,p2=false,p3=false,p4=false;
        //up
        
          p1=find(board,ch,cur+1,i-1,j,V);

        // down
        
            p2=find(board,ch,cur+1,i+1,j,V);
        //right
        
            p3=find(board,ch,cur+1,i,j+1,V);
        //left
       
            p4=find(board,ch,cur+1,i,j-1,V);
        if( p1||p2||p3||p4)return true;
        V[i][j]=false;
        return false;
           
    }
}
/*



*/