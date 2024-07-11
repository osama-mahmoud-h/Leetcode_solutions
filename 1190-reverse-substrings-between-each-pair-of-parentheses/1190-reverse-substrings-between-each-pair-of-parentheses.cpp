class Solution {
public:
    string reverseParentheses(string s) {
        string ans = "";
        stack<char>st;
        
        for(auto const &ch: s){
            
            if(ch !=')'){
                st.push(ch);
                continue;
            }
            
            string temp = "";
            while(st.size() && st.top()!='('){
                temp += st.top();
                st.pop();
            }
            st.pop(); // pop '('
            
            for(int i = 0; i<temp.size(); i++){
                st.push(temp[i]);
            }
        }
        
        while(st.size()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());        
        return ans;
    }
};

