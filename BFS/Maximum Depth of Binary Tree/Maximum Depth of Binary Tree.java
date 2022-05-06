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
import java.util.*;
class Solution {
    public int maxDepth(TreeNode root) {
        if( root == null) return 0;
        int level = 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()){
            int n = q.size();
            level++;
            for(int i = 0; i < n; i++){
                if(q.peek().left != null) q.offer(q.peek().left);
                if(q.peek().right != null) q.offer(q.peek().right);
                q.poll();
            }
        }
        return level;
    }
}
