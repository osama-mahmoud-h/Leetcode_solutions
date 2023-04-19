class Solution {
private:
    unordered_set<TreeNode*>visited;
    int max_ = 0;
    int get_max(TreeNode* root,bool parent_type){
        if (!root || visited.find(root)!=visited.end()){
            return 0;
        }
        visited.insert(root);
        int left = 0;
        int right = 0;

        if(parent_type==0){//parent is left
            left = 1 + get_max(root->right,!parent_type);
        }else{
            right = 1 + get_max(root->left,!parent_type);
        }

        max_ = max({max_,left,right});

        return max(left,right);
    }
    
    void dfs(TreeNode * root){
        if(!root){
            return;
        }
        //not visited before.
            get_max(root->left,0);
            get_max(root->right,1);
            
         dfs(root->left);
         dfs(root->right);
    }
public:
    int longestZigZag(TreeNode* root) {
        dfs(root);
        return max_;
    }
};
