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
    List<List<Integer>> res = new ArrayList<>();
    public List<List<Integer>> levelOrder(TreeNode root) {
        Queue<TreeNode> que = new LinkedList<TreeNode>();
        que.add(root);
        while(!que.isEmpty()) {
          int len = que.size();
          List<Integer> currLevel = new ArrayList<>();
          for(int i = 0; i < len; i++) {
            TreeNode curr = que.remove();
            if(curr != null)
            currLevel.add(curr.val);
            if(curr != null && curr.left != null) que.add(curr.left);
            if(curr != null && curr.right != null) que.add(curr.right);
          }
          if(currLevel.size() > 0)
          res.add(currLevel);
        }
        return res;
    }
}
