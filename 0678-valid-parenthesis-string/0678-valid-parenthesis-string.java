class Solution {
    public boolean checkValidString(String s) {
        Stack<Integer> st = new Stack() , atriks = new Stack();

        int n = s.length();
        for(int i = 0; i<n ; i++){
            char c = s.charAt(i); 
            if(c == '('){
                st.push(i);

            }else if(c == '*' ){
                 atriks.push(i);
            }
            else{ // )
                if(!st.isEmpty()){
                    st.pop();     
                }else if(!atriks.isEmpty()){
                    atriks.pop();
                }else
                    return false;
            }
        }
        while(!st.isEmpty()){
            if(atriks.isEmpty() || st.pop() > atriks.pop())
                return false;

        }
       // System.out.println("st size:" + st.size()+ " , astriks: "+atriks);
        return true;
    }
}

/**
(*(())))

 */