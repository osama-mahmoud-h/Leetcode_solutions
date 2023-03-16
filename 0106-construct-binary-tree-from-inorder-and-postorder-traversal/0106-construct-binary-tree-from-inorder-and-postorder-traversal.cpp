class Solution {
    TreeNode * helper(vector<int>& inorder, vector<int>& postorder,int low, int high,int &postPtr){
     //   cout<<postPtr<<"\n";
        if(low>high || postPtr<0) return 0;

        TreeNode *root = new TreeNode(postorder[postPtr]);
       // cout<<root->val<<"\n";
        int mid = 0;
        for (int i = low; i <=high; ++i) {
            if(inorder[i] == postorder[postPtr]){
                mid = i;
                break;
            }
        }

       postPtr--;
       root->right = helper(inorder,postorder,mid+1,high,postPtr);
      // postPtr--;
       root->left = helper(inorder,postorder,low,mid-1,postPtr);
       
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postPtr = postorder.size() - 1;
        int high = postPtr;
        return helper(inorder,postorder,0,high,postPtr);
    }
};
