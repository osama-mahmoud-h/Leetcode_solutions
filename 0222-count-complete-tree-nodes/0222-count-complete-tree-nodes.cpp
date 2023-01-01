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
public:
    int recur(TreeNode* rt){
        if(!rt){
            return 0;
        }
        int rDepth = 0,lDepth=0;
        
         TreeNode *left=rt;
         TreeNode *right=rt;
         while(left){
             lDepth++;
             left=left->left;
         }
         while(right){
             rDepth++;
             right=right->right;
         }
        
        if(rDepth==lDepth){
            return (1<<lDepth)-1;
        }
        return 1+recur(rt->right)+recur(rt->left);

    }
    int countNodes(TreeNode* root) {
        return recur(root);
    }
};