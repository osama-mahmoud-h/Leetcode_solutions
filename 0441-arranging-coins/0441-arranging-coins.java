class Solution {
    public int arrangeCoins(int n) {
         long res=n;
      int root1=(int)(-1-(Math.sqrt(1+8*res)))/2;
      int root2=(int)(-1+(Math.sqrt(1+8*res)))/2;
    
      return Math.min(Math.abs(root1),Math.abs(root2));
    }
}