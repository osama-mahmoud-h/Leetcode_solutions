class Solution {
    public int[] rearrangeArray(int[] n) {
      int  z=n.length;
        int[]even=new int[z/2];
        int[]odd=new int[z/2];
        int j=0,x=0;
        for(int i=0;i<z;i++){
            if(n[i]>0)
                even[j++]=n[i];
            else odd[x++]=n[i];
            
            }
        j=x=0;
        for(int i=0;i<z;i++){
            if(i%2==0)
                n[i]=even [j++];
            else n[i]=odd[x++];
            }
        return n;
    }
}