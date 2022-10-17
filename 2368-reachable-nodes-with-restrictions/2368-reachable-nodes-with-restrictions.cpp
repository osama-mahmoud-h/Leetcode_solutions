class Solution {
public:
  int bfs(vector<vector<int>>adj, unordered_set<int>&restricted){
    queue<int>q;
    
    int size=0;
    q.push(0);
    restricted.insert(0);
    size++;
    while (!q.empty()){
        int front = q.front();
        q.pop();
      
        for(auto nig:adj[front]){
            if(!(restricted.find(nig)!=restricted.end())){
                 q.push(nig);
                  restricted.insert(nig);
                size++;
            }
        }
    }
    return size;
}
int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
    unordered_set<int >rest;
    for(auto i:restricted){
        rest.insert(i);
    }
    vector<vector<int>> adjList;
    adjList = vector<vector<int>>(n);

    for(auto e:edges){
        adjList[e[0]].push_back(e[1]);
        adjList[e[1]].push_back(e[0]);
    }
    return bfs(adjList,rest);
}
};