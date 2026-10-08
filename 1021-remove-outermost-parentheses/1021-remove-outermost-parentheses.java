class Solution {
    public String removeOuterParentheses(String S) {
        int open=0;
        int close=0;
        int start=0,end=0;
        
        StringBuilder res=new StringBuilder();
        
        for(char c:S.toCharArray()){
            if(c=='('){open++;end++;}
            else {close++;end++;}
            if(close==open){
                res.append(S.substring(start+1,end-1));
                    start=end;  
            }
        }
        return res.toString();
    }
}