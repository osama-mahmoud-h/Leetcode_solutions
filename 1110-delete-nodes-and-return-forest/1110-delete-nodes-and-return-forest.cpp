class Solution {
private:
    TreeNode* dfs(TreeNode* rt, unordered_set<int> &to_delete_set, vector<TreeNode*>&ans){
        if(!rt){
            return nullptr;
        }
        rt->left = dfs(rt->left, to_delete_set, ans);
        rt->right = dfs(rt->right, to_delete_set, ans);

        if (to_delete_set.find(rt->val) != to_delete_set.end()) {
            // If the node has left or right children, add them to the forest
            if (rt->left) {
                ans.push_back(rt->left);
            }
            if (rt->right) {
                ans.push_back(rt->right);
            }
            // Delete the current node and return null to its parent
            delete rt;
            return nullptr;
        }

        return rt;
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int>to_delete_set(to_delete.begin(), to_delete.end());
        vector<TreeNode*>ans;
        root = dfs(root, to_delete_set, ans);

        // If the root is not deleted, add it to the forest
        if (root) {
            ans.push_back(root);
        }

        return ans;
    }
};