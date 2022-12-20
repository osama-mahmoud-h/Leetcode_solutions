class Solution {
public:
  void dfs(unordered_set<int>&vis,int start,vector<vector<int>>& rooms){
    vis.insert(start);
    for (auto key:rooms[start]) {
        if(vis.find(key)==vis.end()){
            dfs(vis,key,rooms);
        }
    }
}
bool canVisitAllRooms(vector<vector<int>>& rooms) {
    unordered_set<int>vis;
    dfs(vis,0,rooms);
    return vis.size()== rooms.size();
}
};