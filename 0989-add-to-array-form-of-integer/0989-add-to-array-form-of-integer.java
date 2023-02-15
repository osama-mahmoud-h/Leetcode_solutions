class Solution {
    public List<Integer> addToArrayForm(int[] A, int K) {
        
        List<Integer> ans =new ArrayList();
        int carry=0;
        int l=A.length-1;
        while(l>=0||K>0){
            int x1=l>=0?A[l--]:0;
            int x2=K%10;
            K/=10;
           int sum=(x1+x2+carry)%10;
            carry=(x1+x2+carry)/10;
            ans.add(sum);
        }
        if (carry==1)ans.add(carry);
        
        Collections.reverse(ans);
        
        return ans;
        
        
    }
}