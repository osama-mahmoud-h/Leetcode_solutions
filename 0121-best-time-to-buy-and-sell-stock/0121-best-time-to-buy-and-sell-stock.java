class Solution {
    public int maxProfit(int[] prices) {
        int maxprofet=0;
      //  int =0;
       // int indx=0;
        for (int i = 0,j=1; j <prices.length&& i<prices.length; ) {
              if(prices [j]-prices[i]<0){
                  i=j;j++;
              }
            else {
                 if(prices [j]-prices[i]>maxprofet)
                     maxprofet=prices [j]-prices[i];
                j++;
            }
            
           }
        return maxprofet;
    }
}