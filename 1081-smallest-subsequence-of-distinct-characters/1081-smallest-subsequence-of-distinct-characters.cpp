


class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int>freq;
        for (const auto &item: s){
            freq[item]++;
        }
        stack<char>st;
        string ans = "";
        vector<bool>in_stack(26,0);

        for (const auto &item: s){ 
             freq[item]--; 
            if(in_stack[item-'a']){
                continue;
            }
           
            while (st.size() && st.top()>item && freq[st.top()]>0){
                in_stack[st.top()-'a'] = 0;
                st.pop();
            }
           // cout<<'\n';
            st.push(item);
            in_stack[item-'a']=1;
           
        }
         while (st.size()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};