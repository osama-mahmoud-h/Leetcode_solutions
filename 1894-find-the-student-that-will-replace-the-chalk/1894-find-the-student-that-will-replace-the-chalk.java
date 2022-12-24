class Solution {
    public int chalkReplacer(int[] chalk, int K) {
        
        long sum=0;
        for(int i:chalk)
            sum+=i;
        long k=(long)K;
           k=k%sum;
        for(int i=0;i<chalk.length;i++ ){
            
            if(k<chalk[i])
                return i;
            k-=chalk[i];
          
        }
        return 0;
    }
}