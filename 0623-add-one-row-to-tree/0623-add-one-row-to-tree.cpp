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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
        TreeNode *ans=new TreeNode(val);
        ans->left=root;
        return ans;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            if(level+1==depth){break;}
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode *frnt=q.front();
                q.pop();
                if(frnt->left!=nullptr){
                    q.push(frnt->left);
                }
                if(frnt->right!=nullptr){
                    q.push(frnt->right);
                }
            }
            level++;
        }
        
        //cout<<q.size()<<"\n";
        while(!q.empty()){
              TreeNode *frnt=q.front();
               q.pop();
             TreeNode* tmpR=frnt->right;
             TreeNode* tmpL=frnt->left;
             
            //create new left node
            TreeNode * newLNode = new TreeNode(val);
            frnt->left = newLNode;
            newLNode->left = tmpL;
            
              //create new right node
            TreeNode * newRNode = new TreeNode(val);
            frnt->right = newRNode;
            newRNode->right = tmpR;
        }
       return root; 
    }
};





























/**/