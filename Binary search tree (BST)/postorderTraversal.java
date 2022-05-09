
//in postorderTraversal (we visit left nodes then right nodes then root).
class Solution {
    ArrayList postorder = new ArrayList<>();
    public List<Integer> postorderTraversal(TreeNode root) {
         if(root != null){
            postorderTraversal(root.left);
            postorderTraversal(root.right);
            postorder.add(root.val);
        }
        return postorder;
    }
}
