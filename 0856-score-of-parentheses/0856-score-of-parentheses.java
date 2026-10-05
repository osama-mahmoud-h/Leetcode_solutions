class Solution {
    public int scoreOfParentheses(String S) {
        int ans=0;
        int depth=1;
        for(int i=0;i<S.length()-1; ){
            if(S.charAt(i)=='('&&S.charAt(i+1)==')'){
                ans+=depth;
                i+=2;
            }
            else if(S.charAt(i)=='('){
                depth*=2;
                i++;
            }
            else{
                depth/=2;
                i++;}
        }
        return ans;
    }
}