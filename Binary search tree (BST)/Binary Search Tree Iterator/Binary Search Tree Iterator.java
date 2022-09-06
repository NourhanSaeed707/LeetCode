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
class BSTIterator {
    ArrayList<Integer> v = new ArrayList<Integer>();
    int index = 0;
    void storeTree (TreeNode root){
        if(root == null) return;
        storeTree(root.left);
        v.add(root.val);
        storeTree(root.right);
    }
    public BSTIterator(TreeNode root) {
        if(root != null)
            storeTree(root);
    }
    
    public int next() {
        index++;
        return v.get(index - 1);
    }
    
    public boolean hasNext() {
        if(index == v.size() )
            return false;
        return true;
    }
}

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator obj = new BSTIterator(root);
 * int param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */
