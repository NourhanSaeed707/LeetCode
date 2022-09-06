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
    ArrayList<Integer> v = new ArrayList<Integer>();
    void storeTree (TreeNode root ){
        if(root == null) return;
        storeTree(root.left);
        v.add(root.val);
        storeTree(root.right);
    }
    public int kthSmallest(TreeNode root, int k) {
          if( root != null ) 
            storeTree(root);
        return v.get( k - 1 );
    }
}
