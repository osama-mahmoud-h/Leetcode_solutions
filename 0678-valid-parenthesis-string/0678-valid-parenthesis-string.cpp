class Solution {
public:
    bool checkValidString(string s) {
        stack<int>astriks;
        stack<int>st;
        int i = 0;
        for (const auto &c: s){
            if(c=='*'){
                astriks.push(i);
            }else if (c=='('){
                st.push(i);
            }else {
                if(st.size()){ //(*(*)
                    st.pop();
                }else if(astriks.size()){
                    astriks.pop();
                }else
                    return false;
            }
            i++;
        }

        while(st.size() and astriks.size()){
            if(st.top() > astriks.top()){
                return false;
            }
            st.pop();
            astriks.pop();
        }
        return st.empty();
    }
};