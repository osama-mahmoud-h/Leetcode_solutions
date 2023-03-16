class Solution {
    TreeNode * helper(vector<int>& inorder, vector<int>& postorder,
                      unordered_map<int,int>&map,int low, int high,int &postPtr){
        if(low>high || postPtr<0) return 0;

        TreeNode *root = new TreeNode(postorder[postPtr]);

        int mid = map[postorder[postPtr]];
        
        postPtr--;
       root->right = helper(inorder,postorder,map,mid+1,high,postPtr);
       root->left = helper(inorder,postorder,map,low,mid-1,postPtr);

        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postPtr = postorder.size() - 1;
        int high = postPtr;
        unordered_map<int,int>map;
        for (int i = 0; i <= high; ++i) {
             map[inorder[i]] = i;  
        }
        return helper(inorder,postorder,map,0,high,postPtr);
    }
};