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
    int preIndex;
    Map<Integer,Integer> inorderIndexMap;
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if(preorder.length == 0 || inorder.length == 0) return null;
        preIndex = 0;
        inorderIndexMap = new HashMap<>();
        for(int i = 0; i < inorder.length; i++){
            inorderIndexMap.put( inorder[i], i );
        }
        return arrayToTree( preorder, 0, preorder.length - 1 );
    }
    public TreeNode arrayToTree(int [] preorder, int left, int right){
        //if there is no element to construct tree.
        if(left > right) return null;
        TreeNode root = new TreeNode( preorder[preIndex] );
        preIndex++;
        root.left = arrayToTree(preorder, left, inorderIndexMap.get(root.val) - 1 );
        root.right = arrayToTree(preorder,inorderIndexMap.get(root.val) + 1 ,right);
        return root;
    }
  
}
