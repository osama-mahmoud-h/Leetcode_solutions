class Solution {
private:
    bool  isPseudoPalindromic(unordered_map<int,int>&freq){
        int odd = 0;
        for (const auto &item: freq){
            if(item.second&1){
                odd++;
            }
        }
        return odd<=1;
    };
    void dfs(TreeNode* rt,int &ans,unordered_map<int,int>&freq){
        if(rt == nullptr) return;
        freq[rt->val]++;
        if(rt->left == nullptr && rt->right == nullptr){
            if(isPseudoPalindromic(freq)){
                ans++;
            }
        }
        dfs(rt->left,ans,freq);
        dfs(rt->right,ans,freq);
        freq[rt->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        unordered_map<int,int>freq;
        int ans = 0;
        dfs(root,ans,freq);
        return ans;
    }
};