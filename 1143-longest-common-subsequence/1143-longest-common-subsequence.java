class Solution {
    int mem[][];
    public int longestCommonSubsequence(String text1, String text2) {
        mem=new int[text1.length()+1][text2.length()+1];
        for(int []ar:mem)
            Arrays.fill(ar,-1);
        return lcs(text1,text2,text1.length(),text2.length());
    }
    int lcs(String s,String t,int n,int m){
        if(n==0||m==0)return 0;
        if(mem[n][m]!=-1)return mem[n][m];
        if (s.charAt(n-1)==t.charAt(m-1))
            return 1+lcs(s,t,n-1,m-1);
        return mem[n][m]=Math.max(lcs(s,t,n-1,m),lcs(s,t,n,m-1));
    }
}