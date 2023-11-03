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
    int ans = 0;
    pair<int,int> dfs(TreeNode* rt){
        if(!rt)return {0,0};
        pair<int, int> left = dfs(rt->left);
        pair<int, int> right = dfs(rt->right);
        
        int nodeSum = left.first + right.first + rt->val;
        int nodeCount = left.second + right.second+1;
        
        if((nodeSum/nodeCount)==rt->val){ans++;}
       return {nodeSum,nodeCount}; 
    }
public:
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};