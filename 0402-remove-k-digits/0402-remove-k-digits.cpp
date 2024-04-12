class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(k>=n)
            return "0";

        stack<char> st;
        for (int i = 0; i < n; ++i) {
            while(k>0 and st.size() and st.top()>num[i]){
                st.pop();
                k--;
            }
            if(st.size() or num[i]!='0')
               st.push(num[i]);
        }
        while (k>0 and st.size()){
            st.pop();
            k--;
        }
        string ans = "";
        while(st.size()){
            ans += st.top();
            st.pop();
        }
       // cout<<"ans: "<<ans<<ln;
        reverse(ans.begin(),ans.end());
       return ans.empty() ? "0" : ans;
    }
};