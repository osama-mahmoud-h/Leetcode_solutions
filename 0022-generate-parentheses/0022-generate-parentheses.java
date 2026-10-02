class Solution {
  int max;
    List<String>ans;
    public List<String> generateParenthesis(int n) {
         max=n;
        ans=new ArrayList<>();
        StringBuilder sb=new StringBuilder();
        back('(',0,0,sb);
        return ans;    
    }
    void back(char cur,int open ,int close,StringBuilder sb){
        sb.append(cur);
        if(sb.length()==max*2){
           // if(isBalance(sb.toString()))    
            ans.add(sb.toString());
           // return ;
        }
        if(open<max-1)
           back('(',open+1 ,close, sb) ;
        if(close<max&&close<=open)
            back( ')',open ,close+1, sb) ;
        sb.deleteCharAt(sb.length()-1);
        close--;
        open--;
    }
    boolean isBalance(String s){
        Stack<Character>st=new Stack();
        for(char c:s.toCharArray()){
           if(c=='(') 
               st.push(c);
            else{
                if(st.isEmpty())return false;
                else if(st.peek()==')') return false;
                st.pop();
            }
        }
            return st.isEmpty();
    }
}