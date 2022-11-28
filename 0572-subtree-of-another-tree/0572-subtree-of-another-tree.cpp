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
       void serialize(TreeNode* node, string& treeStr) {
        if (node == nullptr){
            treeStr += "#";
            return;
        }

        treeStr += "^";
        treeStr += to_string(node->val);
        serialize(node->left, treeStr);
        serialize(node->right, treeStr);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // Serialize given Nodes
        string r = "";
        serialize(root, r);
        string s = "";
        serialize(subRoot, s);
        
        if(r.find(s)>r.length()-1)
            return 0;
        
        return 1;
    }
};