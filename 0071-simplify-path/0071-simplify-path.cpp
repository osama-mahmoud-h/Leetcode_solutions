class Solution {
    private:
     std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    for (char c : str) {
        if (c == delimiter) {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        } else {
            token += c;
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}
public:
    string simplifyPath(string path) {
    stack<string>st;
     //   st.push("/");
     char delimiter = '/';
    std::vector<std::string> tokens = splitString(path, delimiter);
    for (auto& token : tokens) {
        if(token==".."){
            if(st.size()){
               // if(st.top()=="/" ans st.size()>1){}
                st.pop();
               // st.pop();
                }
        }else{
            if(token!=".")
            st.push(token);
         //   st.push("/"); 
        }
    }

    while(st.size()>1 and st.top()=="/")st.pop();
    string ans="";
    vector<string> tmp;
    while(st.size()){
        tmp.push_back(st.top());
        st.pop();
    }
    reverse(tmp.begin(), tmp.end());
    for(auto s: tmp){
        ans+= "/"+s;
    }
    return !ans.length()  ? "/" : ans ;
    }
    
};
