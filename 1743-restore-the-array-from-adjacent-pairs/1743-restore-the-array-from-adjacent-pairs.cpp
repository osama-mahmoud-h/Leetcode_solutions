
class Solution {
private:
    int getFirstTerminalNode(unordered_map<int,vector<int>>&graph){
        int st = 0;
        for (const auto &item: graph){
            if(item.second.size()==1){
                st = item.first;
                break;
            }
        }
        return st;
    }
    void dfs(unordered_map<int,vector<int>>&graph,int st,unordered_set<int>&visited, vector<int>&ans){
        visited.insert(st);
        ans.push_back(st);
        for (const auto &item: graph[st]){
            if(visited.find(item)==visited.end()){
                dfs(graph,item,visited,ans);
            }
        }
    }
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>graph;
        for (const auto &item: adjacentPairs){
            graph[item[0]].push_back(item[1]);
            graph[item[1]].push_back(item[0]);
        }
        vector<int>ans;
        unordered_set<int>visited;
        int st = getFirstTerminalNode(graph);
        dfs(graph,st,visited,ans);
        
        return ans;
    }
};