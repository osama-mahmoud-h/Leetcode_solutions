/**dear
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
class Solution {public void dfs(TreeNode n,int hight, List<List<Integer>> list){
           if(n==null)return ;
        
        if(list.size()<=hight){ 
            list.add(new ArrayList()); 
           }
           list.get(hight).add(n.val);
        
        dfs(n.left,hight+1,list);
        dfs(n.right,hight+1,list);
    }
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> res=new ArrayList<>();
        dfs(root,0,res);
        for (int i=0;i<res.size();i++){
            if(i%2==1){
                Collections.reverse(res.get(i));
            }
        }
        return res;
    }
}