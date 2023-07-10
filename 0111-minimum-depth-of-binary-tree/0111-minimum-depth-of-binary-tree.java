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
    int min=(int)10e7;
    void dfs(TreeNode n,int h){
        if(n==null)return ;
        if(n.left==null&&n.right==null){
            min=Math.min(min,h);
        }
        dfs(n.left,h+1);
        dfs(n.right,h+1);
    }
    public int minDepth(TreeNode root) {
        if(root==null)return 0;
        dfs(root,1);
        return min;
    }
}