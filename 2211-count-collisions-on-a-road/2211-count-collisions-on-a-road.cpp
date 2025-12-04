class Solution {   
public:
    int countCollisions(string directions) {
        stack<char> st;
        int ans = 0;
        for (const auto &dir: directions){
            if(st.empty() or st.top() == 'L'){
                st.push(dir);
                continue;
            }
            if(st.top()=='R'){
               if(dir == 'L'){
                   ans +=2;
                   st.pop();
                   st.push('S');
               }else if(dir == 'S'){
                   ans++;
                st.push('S');
               }else{
                st.push(dir);
               }
            }else{ // is s
                if(dir == 'L'){
                    ans++;
                    st.push('S');
                }else{
                    st.push(dir);
                }
            }
        }
        return ans;
    }
};