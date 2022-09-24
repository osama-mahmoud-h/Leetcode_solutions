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
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        List<List<Integer>> ans=new ArrayList<>();
        LinkedList<Integer>list=new LinkedList<>();
        dfs(root,0,targetSum,list,ans);
        return ans;
    }
    void dfs(TreeNode root,int sum,int targetSum, LinkedList<Integer>list,List<List<Integer>> ans){
        if(root==null)
            return ;
        int cur_sum=sum+root.val;
        list.add(root.val);
        
        dfs(root.left,cur_sum,targetSum,list,ans);
        dfs(root.right,cur_sum,targetSum,list,ans);
        
        if(targetSum==cur_sum&&root.right==null&&root.left==null){
            ans.add(new LinkedList<>(list));
            //System.out.print(list.toString());
        }
        list.removeLast();
    }
}