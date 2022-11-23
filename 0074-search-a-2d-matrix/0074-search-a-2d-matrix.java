class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int rows=matrix.length;
        int cols=matrix[0].length;
        
        int low=0,high=rows-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target>=matrix[mid][0]&&target<=matrix[mid][cols-1]){
              if(Arrays.binarySearch(matrix[mid],target)>=0)
                  return true;
                else return false;
            }
            else if(target<matrix[mid][cols-1]){
                high=mid-1;
            }
                else{
                    low=mid+1;
                }
        }
            
      //ystem.out.print( Arrays.binarySearch(ar,-2));
        
        
        return false;
    }
}