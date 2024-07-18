class Solution {
private:
    void dfs(TreeNode* currNode, TreeNode* prevNode, unordered_map<TreeNode*, vector<TreeNode*>>& graph,
             unordered_set<TreeNode*>& leafNodes) {
        if(!currNode)
            return;
        if (!currNode->left && !currNode->right) {
            leafNodes.insert(currNode);
        }
        if(prevNode){
            graph[prevNode].push_back(currNode);
            graph[currNode].push_back(prevNode);
        }
        dfs(currNode->left, currNode, graph, leafNodes);
        dfs(currNode->right, currNode, graph, leafNodes);
    }
public:
    int countPairs(TreeNode* root, int distance) {
        unordered_map<TreeNode*, vector<TreeNode*>> graph;
        unordered_set<TreeNode*> leafNodes;

        dfs(root, nullptr, graph, leafNodes);

        int ans = 0;

        for (auto leaf : leafNodes) {
            queue<TreeNode*> bfsQueue;
            unordered_set<TreeNode*> seen;
            bfsQueue.push(leaf);
            seen.insert(leaf);

            // Go through all nodes that are within the given distance of
            // the current leaf node
            for (int i = 0; i <= distance; i++) {
                int size = bfsQueue.size();
                for (int j = 0; j < size; j++) {
                    TreeNode* currNode = bfsQueue.front();
                    bfsQueue.pop();
                    if (leafNodes.count(currNode) && currNode != leaf) {
                        ans++;
                    }
                    if (graph.count(currNode)) {
                        for (auto neighbor : graph[currNode]) {
                            if (!seen.count(neighbor)) {
                                bfsQueue.push(neighbor);
                                seen.insert(neighbor);
                            }
                        }
                    }
                }
            }
        }
        return ans / 2;
    }
};
