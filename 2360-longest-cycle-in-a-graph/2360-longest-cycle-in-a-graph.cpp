
class Solution {
    int mx;
private:
    void dfs(vector<int>&edges ,int idx,vector<bool>&vis,stack<int>&st){
        if(idx==-1){
            return;
        }
        //vis[idx] = true;
        if(vis[idx]){
           // cout<<idx<<"\n";
            int cnt = 0;
            bool instack = 0;
            while(st.size()){
                if(st.top()==idx){
                    instack = 1;
                    break;
                }
                st.pop();
                cnt++;
            }
            if(instack){
              mx = max(cnt+1,mx); 
            }
        }else{
            vis[idx] = 1;
            st.push(idx);
            dfs(edges,edges[idx],vis,st);
        }
    }
public:
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        mx = -1;
        vector<bool>visted(n,0);
        stack<int>st;
        for (int i = 0; i < n; ++i) {
            if(!visted[i]){
                dfs(edges,i,visted,st);
               
            }
             while(st.size()){st.pop();}
        }
        return mx;
    }
};