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
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if(preorder.length == 0 || inorder.length == 0) return null;
        return helper(0, 0 , inorder.length, preorder, inorder);
    }
   public TreeNode helper(int preStart, int inStart, int inEnd , int[] preorder, int[] inorder){
       if(preStart > preorder.length-1 || inStart > inEnd ) return null;
       TreeNode root = new TreeNode(preorder[preStart]);
       int mid = 0;
       for(int i = 0; i < inorder.length; i++) {
           if( inorder[i] == root.val ){
               mid = i; break;
           }
       }
       root.left = helper(preStart + 1, inStart, mid - 1, preorder, inorder);
       root.right = helper(preStart + mid - inStart+1, mid+1, inEnd, preorder, inorder);
       return root;
   } 
}
