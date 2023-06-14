/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    
// public void getmini (TreeNode node,List<Integer>list){
//      if(node==null)return ;

//     list.add();
//    getmini(node.left,list);
//   getmini(node.right,list);  
    
// }
    int min=Integer.MAX_VALUE;
    TreeNode pre=null;
   public  void dfs(TreeNode cur){
       
       if(cur==null)return;
       dfs(cur.left);
       if(pre!=null) min=Math.min(cur.val-pre.val,min);
       pre=cur;
       dfs(cur.right);
   }
    public int getMinimumDifference(TreeNode root) {
       dfs(root);
       return min; 
    
    }
}