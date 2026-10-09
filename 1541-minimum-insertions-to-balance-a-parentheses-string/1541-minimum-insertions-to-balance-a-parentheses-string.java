class Solution {
    public int minInsertions(String s) {
        Stack<Character> st = new Stack<>();
        int n = s.length(), ans = 0;

        for (int i = 0; i < n; i++) {
            char c = s.charAt(i);
            if(c=='('){
                st.push(c);
               // ans++;
            } else if(c==')' && i+1 < n && s.charAt(i+1) == '('){ // )(..."
                if(st.isEmpty()) {
                    ans++;
                    //st.push(c);
                }else{
                    st.pop();
                   // ans--;
                }
                ans++;
            }else if(c==')' && i+1 < n && s.charAt(i+1) == ')'){ // ))..."
                if(st.isEmpty()) {
                    ans++;
                   // st.push(c);
                }else{
                    st.pop(); 
                    //ans--;
                }
                i++;
            }else{ // )"
                if(st.isEmpty()) {
                    ans++;
                   // st.push(c);
                }else{
                    st.pop();
                   // ans--;
                }
                ans++;
            }
        }

        return ans + st.size() * 2;
    }
}
