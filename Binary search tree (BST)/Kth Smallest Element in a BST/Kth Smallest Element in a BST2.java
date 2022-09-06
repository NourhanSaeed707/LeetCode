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
    int index = 0, ans;
    void storeTree(TreeNode root, int k ){
          if(root != null ){
                storeTree(root.left, k);
                index++;
                if(index == k)
                    ans = root.val;
                storeTree(root.right, k);
          }
    }
    public int kthSmallest(TreeNode root, int k) {
        storeTree(root, k);
        return ans;
    }
}
