// class Solution {
//     public List<List<Integer>> shiftGrid(int[][] grid, int k) {
//         List<List<Integer>> ans=new ArrayList<>();
//         int m = grid.length;
//         int n = grid[0].length;
        
//         if(k==0){
//              for (int j = 0; j <m ; j++) {
//                  ans.add(new ArrayList());
//             for (int x = 0; x <n ; x++) {
//                ans.get(j).add( grid[j][x]);
//             }
//             }
//           return ans;  
//          }
            
        
//         for(int t=1;t<=k;t++){
//          ans.clear();
//             for(int i=0;i<m;i++ ){
//                 ans.add(new ArrayList());
//                 for(int j=0;j<n;j++){
//                    if(i==0&&j==0){ans.get(0).add(grid[m-1][n-1]);}
//                    if(j==0&&i>0){ans.get(i).add(grid[i-1][n - 1]);}
                    
//                  if(j>0)ans.get(i).add(grid[i][j-1]);
                    
//                 }
//             }
            
//              for (int j = 0; j <m ; j++) {
//              for (int x = 0; x <n ; x++) {
//                 grid[j][x]=ans.get(j).get(x);
//             }
//         }
//         }
//         return ans;
//     }
// }
class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        
        int m = grid.length;
        int n = grid[0].length;
        int gridSize = m * n;
        int counter = 0; // Number of permutations performed
        int beginIndex = 0; // Index of element we start from in cycle 1
        
        if (k != 0) {
            while (counter < gridSize) { // Cycle 1
            
                int currentIndex = beginIndex;
                int value = grid[currentIndex / n][currentIndex % n]; // Stores values between iterations 
                    
                do { // Cycle 2
                    
                    // Move k positions
                    currentIndex += k;
                    currentIndex %= gridSize;
                    
                    // Swap values
                    int tmp = grid[currentIndex / n][currentIndex % n];
                    grid[currentIndex / n][currentIndex % n] = value;
                    value = tmp;
                    
                    counter++;
                    
                } while (currentIndex != beginIndex);
                
                // If in Cycle 2 we did not iterate over all elements in grid
                // move forward by one and repeat (Cycle 1 will go on until counter will reach gridSize)
                beginIndex++; 
                
            }
        }
        
        // Write grid to list and return
        List<List<Integer>> result = new ArrayList<>(m);
        for (int[] line : grid) {
            List<Integer> lineList = new ArrayList<>(n);
            for (int val : line) {
                lineList.add(val);
            }
            result.add(lineList);
        }
        return result;
    }
}