class Solution {
public:
    long long ans = 0, total_sum = 0, mod = 1e9 + 7;
    int maxProduct(TreeNode* root) {
        total_sum = dfs(root); 
        dfs(root); 
        return ans % mod;
    }
    int dfs(TreeNode* rt){
        if(!rt)
            return 0;
        int cur_sum = dfs(rt->left) + dfs(rt->right) + rt->val;
        ans = max(ans , (total_sum - cur_sum) * cur_sum);
        return cur_sum;
    }
};