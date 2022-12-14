class Solution {
   int[] mem= new int [101];
  
    
   int max(int[]a,int n){
       if(n>=a.length) return 0;
       if(mem[n]!=-1)return mem[n];
       int mx=0;
          mx= Max(mx,a[n]+max(a,n+2));
          mx=Max(mx,max(a,n+1));
    // int max1=a[n-1]+max(a,n-2);
    // int max2=max(a,n-1);
       
    return mem[n]=mx;
  }
    
int Max(int a,int b){
    return (a>b)?a:b;
}
    public int rob(int[] num) {
         Arrays.fill(mem,-1);
      return max(num,0);
        
    }
}