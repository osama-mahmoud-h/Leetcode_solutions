class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int parentheses = 0;
        stack<char>st;
        for(auto const&c : s){
            if(c==')'){
                if(parentheses < 1){
                    continue;
                }
                parentheses--;
                st.push(c);
                continue;
            }else if(c=='('){
                parentheses++;
            }
            st.push(c);
        }

        string ans = "";

        while(!st.empty()){
            if(parentheses && st.top()=='('){
                st.pop();
                parentheses--;
                continue;
            }
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
