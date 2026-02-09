/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    vector<TreeNode*>nodes;
    void inorder_dfs(TreeNode* rt){
        if(!rt)
            return;
        inorder_dfs(rt->left);
        nodes.push_back(rt);
        inorder_dfs(rt->right);
    }
    TreeNode* build_bst_balanced(int left, int right){
        if(left > right)
            return nullptr;
        
        int mid = (left + right) / 2 ;
        TreeNode* rt = nodes[mid];

        rt->left = build_bst_balanced(left, mid - 1);
        rt->right = build_bst_balanced(mid+1, right);

        return rt;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorder_dfs(root);
        return build_bst_balanced(0, nodes.size()-1);
    }
};