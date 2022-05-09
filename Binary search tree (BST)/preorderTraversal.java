//in preorderTraversal (we visit root then left nodes then right nodes).
class Solution {
    ArrayList preorder = new ArrayList<>();
    public List<Integer> preorderTraversal(TreeNode root) {
         if(root != null){
            preorder.add(root.val);
            preorderTraversal(root.left);
            preorderTraversal(root.right);
        }
        return preorder;
    }
}
