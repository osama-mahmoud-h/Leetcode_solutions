class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        
        int res=arr1.length;
        for (int i = 0; i <arr1.length ; i++) {
            int temp=0;
               for (int j = 0; j <arr2.length ; j++) {
                   if(Math.abs(arr1[i]-arr2[j])<=d){temp++;break;}
                   
               }
            if(temp>0)res--;
           }
        return res;
    }
}