class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        
       // int []res=new int[arr.length];
        
        int diff=0;
      //  for(int i=0;i<arr.length;i++)
       //     res[i]=arr[i];
        
        Arrays.sort(arr);
        
        diff=Math.abs(arr[0]-arr[1]);
        
         for(int i=0;i<arr.length-1;i++)
             if(Math.abs(arr[i]-arr[i+1])!=diff)return false;
        
        return true;
    }
}