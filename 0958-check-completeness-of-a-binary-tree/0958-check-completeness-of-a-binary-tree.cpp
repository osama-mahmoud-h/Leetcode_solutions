class Solution {
private:
    bool bfs(TreeNode *root){
        queue<TreeNode *> q;
        bool incomplete = false;
        q.push(root);


        for(int cnt = 0; q.size();cnt++){
            if(incomplete) return 0;
            int sz = q.size();
            if(sz !=(1<<cnt)){incomplete = 1;}
            
            int j = 0;
            int cntNode = 0;
            for(int i = 0; i < sz; i++){
                TreeNode *frnt = q.front();
                q.pop();
                if(frnt->left){
                    cntNode++;
                    if(cntNode<j+1)return 0;
                    q.push(frnt->left);
                }
                if(frnt->right){
                     cntNode++;
                    if(cntNode<j+2)return 0;
                    q.push(frnt->right);
                }
                j+=2;
            }
        }

        return 1;
    }
public:
    bool isCompleteTree(TreeNode* root) {
        if(!root) return true;
        return bfs(root);
    }
};