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
    int mx_depth = 0;
    int max_depth(TreeNode* rt){
        return !rt ? 0 : 1 + max(max_depth(rt->left),max_depth(rt->right));
    }
    TreeNode* dfs(TreeNode* rt, int cur_depth){
        if(!rt)return 0;
        
        if(mx_depth == cur_depth) return rt;

        TreeNode* left = dfs(rt->left, 1 + cur_depth);
        TreeNode* right = dfs(rt->right, 1 + cur_depth);
        
        if(left and right)return rt;
        
        return left ? left : right;    
    }
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* rt) {
       mx_depth = max_depth(rt);
       return dfs(rt, 1);
    }
};