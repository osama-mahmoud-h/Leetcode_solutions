class Solution{
private:
   int dfs(int start, vector<vector<int>>& adj, string &s, int &longestPath){
       
       int longestChain=0 ,secondLongestChain=0;
     
       for(auto node:adj[start]){
           
           int length_of_cur_chain = dfs(node,adj,s,longestPath);
         
           if(s[node]==s[start]){
               continue;
           }
           
           if(length_of_cur_chain>longestChain){
               secondLongestChain = longestChain;
               longestChain = length_of_cur_chain;
           }
           else if(length_of_cur_chain>secondLongestChain){
               secondLongestChain = length_of_cur_chain;
           }
       }
        longestPath = max(longestPath,
                          longestChain+secondLongestChain+1);
           
           return 1+longestChain;
   }
public:
    int longestPath(vector<int>& pr, string s) {
        
        int n= pr.size();
        vector<vector<int>> adj(n);
        
        for (int i = 1; i < n; ++i) {
            adj[pr[i]].push_back(i);
        }
        
        int ans=1;

        dfs(0,adj,s,ans);

        return ans;
    }

};