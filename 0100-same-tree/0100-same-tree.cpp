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
    bool is_equal(TreeNode* p, TreeNode* q){
        if(!q&&!p)
            return 1;
        if((!p&&q)||(p&&!q))
            return 0;
        return p->val==q->val &&
               is_equal(q->left,p->left) && 
               is_equal(q->right,p->right) ;
    }
    public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return is_equal(p,q);
    }
};