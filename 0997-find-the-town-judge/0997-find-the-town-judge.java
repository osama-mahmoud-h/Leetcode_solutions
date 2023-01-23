class Solution {
    public int findJudge(int N, int[][] trust) {
       int[] isTrusted = new int[N+1];
		int[] trusts = new int[N+1];
		Arrays.fill(isTrusted, 0);
		Arrays.fill(trusts, 0);
    
		for(int i=0; i<trust.length; i++){
			trusts[trust[i][0]]++;
			isTrusted[trust[i][1]]++;
		}
		for(int i=1; i<=N; i++){
			if(trusts[i]==0 && isTrusted[i]==N-1)
				return i;
		}
		return -1;
    }
}