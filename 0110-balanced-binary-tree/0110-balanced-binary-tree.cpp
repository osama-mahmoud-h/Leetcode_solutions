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
    bool not_balanced = 0;
    int get_max_hight(TreeNode* rt){
        if(!rt)
            return 0;
        int left = get_max_hight(rt->left) + 1;
        int right = get_max_hight(rt->right) + 1;
        not_balanced = not_balanced | abs(left - right) > 1;
        //cout<<"not balanced : "<<not_balanced<<"\n";
        //cout<<"rt:"<<rt->val<<", left: "<<left<<", right: "<<right<<"\n" ;
        return max(left, right);
    }
public:
    bool isBalanced(TreeNode* rt) {
        get_max_hight(rt);
        return !not_balanced;
    }
};