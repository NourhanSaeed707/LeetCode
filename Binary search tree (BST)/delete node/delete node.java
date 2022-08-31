
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
    public TreeNode minVal (TreeNode root){
        TreeNode temp = root;
        while( temp.left != null){
            temp = temp.left;
        }
        return temp;
    }
    public TreeNode deleteNode(TreeNode root, int key) {
        if(root == null) return root;
        if( root.val == key ){
            //if there is no childern
            if(root.right == null && root.left == null){
                return null;
            }
            //one child in left side
            else if( root.left != null && root.right == null ){
                TreeNode temp = root.left;
                return temp;
            }
            //one child in right side
            else if(root.right != null && root.left == null){
                TreeNode temp = root.right;
                return temp;
            }
            // two childern
            else{
                int mini = minVal(root.right).val;
                root.val = mini;
                root.right = deleteNode(root.right, mini);
                return root;
            }
        }
        if(key < root.val)
            //GO TO LEFT SIDE
            root.left = deleteNode(root.left, key);
        else
            //GO TO RIGH SIDE
            root.right = deleteNode(root.right, key);
        return root;
    }
}
