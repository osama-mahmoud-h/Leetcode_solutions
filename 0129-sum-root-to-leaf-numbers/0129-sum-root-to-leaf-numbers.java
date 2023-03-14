/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int ans =0;
    void dfs(TreeNode n,int sum){
        if(n==null)return;
        sum=sum*10+n.val;
        if(n.left==null&n.right==null){
            ans+=sum;
        }

        dfs(n.left,sum);
        dfs(n.right,sum);
    }
    public int sumNumbers(TreeNode root) {
        dfs(root,0);
        return ans;
    }
}