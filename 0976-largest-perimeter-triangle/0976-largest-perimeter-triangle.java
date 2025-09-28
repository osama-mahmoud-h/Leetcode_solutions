class Solution {
//     float Area(int x,int y,int z){
//         float H=(x+y+z)/2.0f;
//         if((float)x-H>=0||(float)y-H>=0||(float)z-H>=0)return 0;
//         return 1;
//     }
    
    public int largestPerimeter(int[] A) {
         Arrays.sort(A);
        int big=0;
        for(int i=0;i<A.length-2;i++)
        {
            int sum=Check(A[i],A[i+1],A[i+2]);
                if(sum>big)
                    big=sum;
        }
        return big;
    }
    public static int Check(int a,int b,int c)
    {
        if(a+b>c && b+c>a && a+c>b)
        {
            return a+b+c;
        }
        else
            return 0;
        
      //   Arrays.sort(A);
      //   int max=0;
      //   for(int i=0;i<A.length-2;i++){
      //       if((A[i]+A[i+1]+A[i+2])>max&& Area(A[i],A[i+1],A[i+2])!=0)max=(A[i]+A[i+1]+A[i+2]);
      //   }
      // //  System.out.print(Area(A[0],A[i+1],A[i+2]));
      //   return max;
        
    }
}