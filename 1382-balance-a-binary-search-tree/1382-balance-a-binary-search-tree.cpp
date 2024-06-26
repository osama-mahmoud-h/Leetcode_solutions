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
    vector<TreeNode*>data;
    void inorder_dfs(TreeNode* rt){
        if(!rt)
            return;
        inorder_dfs(rt->left);
        
        data.push_back(rt);
        
        inorder_dfs(rt->right);
    }
    TreeNode* construct_bst(vector<TreeNode*>& data, int left, int right){
        if(left > right)
            return nullptr;
        
        int mid = (left+right) / 2;
        
        TreeNode* rt = data[mid];
        
        rt->left = construct_bst(data, left, mid-1);
        rt->right = construct_bst(data, mid+1, right);
        
        return rt;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        TreeNode* new_root = nullptr;
        inorder_dfs(root);
        
        return  construct_bst(data, 0 , data.size()-1);
    }
};