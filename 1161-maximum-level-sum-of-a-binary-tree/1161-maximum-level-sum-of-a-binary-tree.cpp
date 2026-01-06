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
void solve(TreeNode* rt, int h, int &mx, int& level, vector<int>&sums){
    if(!rt)
        return;
    if(h >= sums.size())
        sums.push_back(0);
    sums[h] += rt->val;
    solve(rt->left, h+1, mx, level, sums); 
    solve(rt->right, h+1, mx, level, sums); 
}
public:
    int maxLevelSum(TreeNode* root) {
        int mx = INT_MIN, level = 1;
        vector<int>sums;
        solve(root, 0, mx, level, sums);

        return max_element(sums.begin(), sums.end()) - sums.begin() + 1;
    }
};