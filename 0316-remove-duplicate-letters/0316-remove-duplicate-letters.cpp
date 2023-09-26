

class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>freq;
        for (const auto &item: s){
            freq[item]++;
        }
        stack<char>st;
        string ans = "";
        vector<bool>in_stack(26,0);

        for (const auto &item: s){ 
            
           
            while (st.size() && st.top()>item && freq[st.top()]>1 &&!in_stack[item-'a']){
                freq[st.top()]--;
                in_stack[st.top()-'a'] = 0;
                st.pop();
            }
            if(!in_stack[item-'a']){
                 st.push(item);
                 in_stack[item-'a']=1;
            }else{
               freq[item]--; 
            }
           
        }
       // cout<<freq['c'];
         while (st.size()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};