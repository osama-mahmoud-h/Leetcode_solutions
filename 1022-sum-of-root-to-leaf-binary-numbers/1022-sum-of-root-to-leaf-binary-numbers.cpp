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
    int solve(TreeNode* rt, int cur_val){
        if(!rt)
            return 0;
        if (!rt->left and !rt->right)
            return (cur_val << 1) | rt->val; 
        int left = solve(rt->left , (cur_val << 1) | rt->val);
        int right =solve(rt->right , (cur_val << 1) | rt->val);

        return left + right;
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        return solve(root, 0);
    }
};