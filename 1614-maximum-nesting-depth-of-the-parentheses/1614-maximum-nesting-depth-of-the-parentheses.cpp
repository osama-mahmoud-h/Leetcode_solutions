class Solution {
public:
    int maxDepth(string s) {
        int mx = 0;
        stack<char>st;
        for (const auto &c: s){
            if(c=='(') {
                st.push('(');
                int stack_size = st.size();
                mx = max(mx,stack_size);
            }
            else if(c==')'){
                st.pop();
            }
        }
        
        return mx;
    }
};