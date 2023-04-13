class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0 , j = 0, n = pushed.size();
        while (i < n || j < n){
            if(st.size()&&st.top()==popped[j]){
                st.pop();
                j++;
            }else if(i>=n){return 0;}
            else if(i<n){
                st.push(pushed[i++]);
            }
        }
       // cout<<st.size()<<"\n";
        return !st.size();
    }
};