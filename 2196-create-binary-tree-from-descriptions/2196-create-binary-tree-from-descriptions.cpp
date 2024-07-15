class Solution {
private:
    void construct_bt(TreeNode* rt, unordered_map<int,vector<vector<int>>> &adj, int st){
        for (const auto &item: adj[st]){
            int child = item[0], is_left = item[1];
            if(is_left){
                rt->left = new TreeNode(child);
                construct_bt(rt->left,adj, child);
            }else{
                rt->right = new TreeNode(child);
                construct_bt(rt->right, adj, child);
            }
        }
    }
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,vector<vector<int>>> adj;
        set<int>parents;
        for (const auto &item: descriptions){
            int parent = item[0], child = item[1], is_left = item[2];
            parents.insert(parent);
            adj[parent].push_back(vector<int>{child, is_left});
        }

        //remove childrens
        for (const auto &item: descriptions){
            int child = item[1];
            if(parents.find(child)!=parents.end()){
                parents.erase(child);
            }
        }
        int parent = *parents.begin();

        TreeNode* root = new TreeNode(parent);
        construct_bt(root, adj, parent);
        return root;
    }
};
