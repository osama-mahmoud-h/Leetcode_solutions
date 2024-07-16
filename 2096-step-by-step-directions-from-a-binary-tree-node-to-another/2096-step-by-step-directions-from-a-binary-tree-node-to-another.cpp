class Solution {
private:
    TreeNode* get_lca(TreeNode* rt, int n1, int n2){
        if(!rt)
            return nullptr;
        if(rt->val==n1 || rt->val==n2)
            return rt;

        TreeNode* left_lca = get_lca(rt->left, n1, n2);
        TreeNode* right_lca = get_lca(rt->right, n1, n2);

        if(!left_lca)
            return right_lca;
        if(!right_lca)
            return left_lca;

        return rt;
    }
    bool find_path(TreeNode* rt, int target, string &path){
        if(!rt)
            return false;
        if(rt->val == target)
            return true;

        path.push_back('L');
        if (find_path(rt->left, target, path)) {
            return true;
        }
        path.pop_back();  // Remove last character

        // Try right subtree
        path.push_back('R');
        if (find_path(rt->right, target, path)) {
            return true;
        }
        path.pop_back();  // Remove last character

        return false;

    }
public:
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* lowestCommonAncestor =
                get_lca(root, startValue, destValue);

        string pathToStart;
        string pathToDest;
        

        // Find paths from LCA to start and destination nodes
        find_path(lowestCommonAncestor, startValue, pathToStart);
        find_path(lowestCommonAncestor, destValue, pathToDest);

        string directions;

        // Add "U" for each step to go up from start to LCA
        directions.append(pathToStart.length(), 'U');

        // Append the path from LCA to destination
        directions.append(pathToDest);

        return directions;
    }
};