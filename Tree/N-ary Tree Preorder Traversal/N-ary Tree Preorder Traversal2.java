
class Solution {
    List<Integer> list = new ArrayList<Integer>();
    public List<Integer> preorder(Node root) {
        if(root == null) return list;
         Stack<Node> stack = new Stack<Node>();
         stack.push(root);
         while(!stack.isEmpty()){
            Node node = stack.pop();
            list.add(node.val);
            // Pushing children in reverse order. 
            for(int i = node.children.size() -1; i >= 0; i--){
                stack.push(node.children.get(i));
            }
         }
         return list;
    }
}
