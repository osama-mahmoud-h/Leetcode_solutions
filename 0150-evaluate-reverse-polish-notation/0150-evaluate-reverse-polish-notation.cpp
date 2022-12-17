class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<string>st;
    int ans=0;
    for(auto op:tokens){
          long long int second;
          long long int first;
        if(op=="+"){
             second =stoll(st.top());
            st.pop();
             first=stoll(st.top());
            st.pop();
            st.push(to_string(first+second));
        }else if(op=="-"){
             second =stoll(st.top());
            st.pop();
             first=stoll(st.top());
            st.pop();
            st.push(to_string(first-second));
            
        }else if (op=="*"){
             second =stoll(st.top());
            st.pop();
             first=stoll(st.top());
            st.pop();
            st.push(to_string(first*second));
            
        }else if (op=="/"){
             second = stoll(st.top());
                 st.pop();
             first=stoll(st.top());
            st.pop();
            st.push(to_string(first/second));
        }else{
            st.push(op);
        }
    }
    return stoll(st.top());
    }
};