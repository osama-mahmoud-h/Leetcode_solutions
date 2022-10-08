class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
           stack<int>st;
    for(auto i:nums){
        if(st.empty()||i>0){
            st.push(i);
        }else{
           while (!st.empty()){
               int top = st.top();
               if(top>0&&(top+i)==0){
                   st.pop();
                   break;
               } else if(top>0&&(top+i)>0){
                   break;
               } else if(top>0&&(top+i)<0){
                   st.pop();
                   if(st.empty()){st.push(i);break;}
               } else{
                   st.push(i);
                   break;
               }
           }
        }
    }
        
    vector<int>ans;
    while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};