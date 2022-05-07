
/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
import java.util.*;
class Solution {
    public Node connect(Node root) {
        if(root ==null) return root;
        Queue<Node> q = new LinkedList<>(); 
        q.offer(root);
        while(!q.isEmpty()){
            int n = q.size();
            Node prev = null;
            for(int i =0; i<n; i++){
                Node temp = q.peek();
                if(q.peek().left != null)
                    q.offer(q.peek().left);
                if(q.peek().right != null)
                    q.offer(q.peek().right);
                q.poll();
                if( prev != null) prev.next = temp;
                prev = temp;
            }
        }
        return root;
    }
}
