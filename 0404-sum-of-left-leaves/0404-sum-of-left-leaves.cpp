class Solution {
private:
    int sum(TreeNode * root, bool is_left){
        if(!root){
            return 0;
        }
        if (root->left== nullptr and root->right== nullptr and is_left) return root->val;
        return sum(root->left, 1) + sum(root->right, 0);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root== nullptr) return 0;
        int ans = 0;

        return sum(root,0);
    }
};