
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
    public int minDepth(TreeNode root) {
        if(root == null) return 0;
        Queue<TreeNode> q = new LinkedList<>();
        int level = 0;
        q.offer(root);
        while(!q.isEmpty()){
            int size = q.size();
            level++;
            for(int i = 0; i < size; i++){
                if(q.peek().left != null) q.offer(q.peek().left);
                 if(q.peek().right != null) q.offer(q.peek().right);
                 if(q.peek().left == null && q.peek().right == null) 
                    return level;
                q.poll();
            }
        }
        return level;
    }
}
