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
    public boolean isSameTree(TreeNode p, TreeNode q) {
    // here we iterate over all nodes and all of them are equal to each other .
         if(p == null && q == null) return true;
   // size of (p) not equal to size of (q) so they're not equal.
         if(p == null || q == null) return false;
     //recursion line, and we make sure that every node they're equal to each other otherwise return false.
          return (p.val==q.val)&& isSameTree(p.left,q.left) && isSameTree(p.right,q.right);
    }
}
