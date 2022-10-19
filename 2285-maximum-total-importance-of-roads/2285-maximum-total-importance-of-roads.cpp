class Solution {
public:
   long long maximumImportance(int n, vector<vector<int>>& roads) {
    vector<int>adj(n) ;
    for(auto road:roads){
        adj[road[0]]++;

        adj[road[1]]++;
    }

    sort(adj.rbegin(),adj.rend());

   

    long long ans=0;
       
    for(auto deg:adj){
     ans+=(long long)deg*(n--);
    }

    return ans;

}
};