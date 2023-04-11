class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans = "";
        for (const auto &item: s){
            if(item=='*'){
                if(st.size()){
                    st.pop();
                }
            } else{
                st.push(item);
            }
        }

        while (st.size()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
