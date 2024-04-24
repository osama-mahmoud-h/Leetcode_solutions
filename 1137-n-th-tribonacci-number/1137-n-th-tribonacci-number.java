class Solution {
    public int tribonacci(int n) {
         int []arr=new int[38];
        if(n==0)return 0;
        if(n==2||n==1)return 1;

        arr[0]=0;
        arr[1]=1;
        arr[2]=1;
        int sum=0;
        for (int i = 3; i <=n ; i++) {
          arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
            sum=arr[i];
        }
        return sum;
    }
}