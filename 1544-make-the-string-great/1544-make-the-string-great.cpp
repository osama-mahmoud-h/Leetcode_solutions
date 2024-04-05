class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for (const auto &item: s){
            if(st.size()){
                char top = st.top();
                if(tolower(top)== tolower(item) and top!=item){
                    st.pop();
                    continue;
                }
            }
            st.push(item);
        }
        string ans = "";
        while (st.size()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return  ans;
    }
};