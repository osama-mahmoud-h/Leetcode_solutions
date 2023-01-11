class Solution {
private:
    void dfs(int start, vector<vector<int>>&adj, vector<bool>&vis,stack<int>&st ,vector<bool>& hasApple){
        st.push(start);
        vis[start]=1;
        for(auto apple: adj[start]){
            if(!vis[apple]){
                dfs(apple,adj,vis,st,hasApple);
            }
        }
        if(st.size()&&!hasApple[st.top()]){
            st.pop();
        }
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {

    //construct graph
    vector<vector<int>>adj(n);
    vector<bool>vis(n,0);
    stack<int>st;

    for(auto edge:edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    dfs(0,adj,vis,st,hasApple);
    int ans = st.size()-1; 
    return ans<=0 ? 0 : ans*2;

    }
};