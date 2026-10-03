class Solution {
    public int longestValidParentheses(String s) {
        Deque<Integer>st = new ArrayDeque(){{
            push(-1);
        }};

        int n = s.length();
        int res = 0 ;

        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            if(c == '(')
                st.push(i);
            else{
                st.pop();
                if(st.isEmpty()){
                    st.push(i);
                }else{
                    res = Math.max(i - st.peek(), res);
                }
            }
        }

        return res;

    }
}