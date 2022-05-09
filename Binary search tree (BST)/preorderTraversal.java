//in preorderTraversal (we visit root then left nodes then right nodes).
class Solution {
    ArrayList inorder = new ArrayList<>();
    public List<Integer> inorderTraversal(TreeNode root) {
         if(root != null){
            inorder.add(root.val);
            inorderTraversal(root.left);
            inorderTraversal(root.right);
        }
        return inorder;
    }
}
