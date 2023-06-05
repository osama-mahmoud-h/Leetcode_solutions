class Solution {
    public boolean checkStraightLine(int[][]coordinates) {
        if(coordinates.length==2)return true;
        
        float y=((float)coordinates[1][1]-coordinates[0][1]);
        float x=((float)coordinates[1][0]-coordinates[0][0]);
        
       // if(slope== -Float.MAX_VALUE) return true;
      //  System.out.print(s);
        for(int i=1;i<coordinates.length;i++){
            if(x==0){
                if(((float)coordinates[i][0]-coordinates[i-1][0]) !=x)return false;
            }
            else if (  ((float)coordinates[i][1]-coordinates[i-1][1]) /((float)coordinates[i][0]-coordinates[i-1][0]) !=(y/x) )return false;
        }

        return true;
    }
}