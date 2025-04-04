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
    int max_depth(TreeNode* rt){
        if(!rt)return 0;
        return max(max_depth(rt->left), max_depth(rt->right)) + 1;
    }
    TreeNode* dfs(TreeNode* rt, int depth, int max_depth){
        if(!rt)
        return nullptr;

        if(depth == max_depth)
            return rt;

        TreeNode* left = dfs(rt->left, depth+1, max_depth);
        TreeNode* right = dfs(rt->right, depth+1, max_depth);

        if(left and right)
            return rt;
        return left ? left : right;
    }
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int max_d = max_depth(root);
        return dfs(root, 1, max_d);
    }
};