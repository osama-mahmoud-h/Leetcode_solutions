class Solution {
    boolean isOpen(char c){
        return c=='('||c=='{'||c=='[';
    }
   
    
    boolean isVaildPair(char a,char b){
        return (a=='('&&b==')') || (a=='{'&&b=='}')|| (a=='['&&b==']');
    }
    
    
    public boolean isValid(String s) {
        Stack<Character>st=new Stack();
        
        for(char c:s.toCharArray()){
            
            if(st.isEmpty()||isOpen(c)) st.push(c);
                                          
            else {
               
                if(isVaildPair(st.peek(),c))
                    st.pop();
                else return false;
                
            }  
        }
        
        if(!st.isEmpty())return false;
        return true;
    }
}