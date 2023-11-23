class Solution {
    public List<Boolean> checkArithmeticSubarrays(int[] nums, int[] l, int[] r) {
         List<Boolean>ans=new ArrayList<>();
        for(int i=0;i<l.length;i++){
            int tmp[]=new int [r[i]-l[i]+1];
            for(int k=l[i],j=0;k<=r[i];k++,j++){
                tmp[j]=nums[k];
            }
           // System.out.println(Arrays.toString(tmp));
            if(isArithmatic(tmp))ans.add(true);
            else ans.add(false);
        }
        return ans;
         
    }
    // void reverse(int []ar){
    //    int l=0;
    //     int h=ar.length-1;
    //     while(l<h){
    //         int tmp=ar[l];
    //         ar[l]=ar[h];
    //         ar[h]=tmp;
    //         l++;h--; 
    //     }
   // }
    
    boolean isArithmatic(int []ar){
        Arrays.sort(ar);
        int st=ar[1]-ar[0];
        for(int i=2;i<ar.length;i++){
            if(ar[i]-ar[i-1]!=st)return false;
        }
        return true;
    }
}