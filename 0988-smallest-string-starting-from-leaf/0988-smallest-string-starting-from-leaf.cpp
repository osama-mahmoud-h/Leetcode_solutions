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
    string ans = "";
    void dfs(TreeNode* rt,string & str){
        if(!rt){
            return;
        }

        char c = 'a'+rt->val;
        str.push_back(c);
        
        if(!rt->left && !rt->right){
            string tmp =str;
            reverse(tmp.begin(),tmp.end());
            if(ans=="" || tmp<ans)ans=tmp;
        }
        
     
        dfs(rt->left,str);
        dfs(rt->right,str);
        
        str.pop_back();
    }
public:
    string smallestFromLeaf(TreeNode* root) {

        string str="";
        dfs(root,str);
        return ans;
    }
};
