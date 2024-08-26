/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    void dfs_post_order_traversal(Node* rt, vector<int>&ans){
        if(!rt)
            return;
        for (const auto &item: rt->children){
            dfs_post_order_traversal(item,ans);
        }
        ans.push_back(rt->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        dfs_post_order_traversal(root, ans);
        return ans;
    }
};