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
    private :
    void dfs(TreeNode*rt,int h,vector<int>&ans){
        if(!rt){
            return;
        }
        if(ans.size()<=h){
            ans.push_back(rt->val);
        }
        ans[h] = max(ans[h],rt->val);
        dfs(rt->left,h+1,ans);
        dfs(rt->right,h+1,ans);
    }
public:
    vector<int> largestValues(TreeNode* root) {
         vector<int>ans;
        dfs(root,0,ans);
        return ans;
    }
};