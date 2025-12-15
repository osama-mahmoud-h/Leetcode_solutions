class Solution {
    public long getDescentPeriods(int[] prices) {
     long ans=0;
        int cnt=1;
        for(int i=0;i<prices.length-1;i++){
            if(prices[i+1]-prices[i]==1){
                cnt++;
            }
            else{
                ans+=getSum(cnt-1);
                cnt=1;
            }
        }
        return ans+prices.length;
    }
    int getSum(int n){
        return n*(n+1)/2;
    }
    
}