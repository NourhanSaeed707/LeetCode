
/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    List<Integer> list = new ArrayList<Integer>();
    public void preorderHelper(Node node){
        if(node.children == null) return;
        list.add(node.val);
        for(Node child: node.children){
             preorderHelper(child);
        }
    }
    public List<Integer> preorder(Node root) {
        if(root == null) return list;
         preorderHelper(root);
         return list;
    }
}
