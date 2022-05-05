
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
import java.util.*;
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
    // Declare a Result List
        List<List<Integer>> ans=new ArrayList<>();
    
        if(root==null)
            return ans;
   // Declare a Queue List
        Queue<TreeNode> q=new LinkedList<>();
   // Add Root element      
        q.offer(root);
   // Loop While queue is Not Empty
        while(!q.isEmpty())
        {
           int n = q.size();
            
          List<Integer> list=new ArrayList<>();
            for(int i=0;i < n; i++)
                {
                    if( q.peek().left!=null )
                        q.offer(q.peek().left);
                    if( q.peek().right!=null )
                        q.offer(q.peek().right);
                    list.add(q.poll().val);
                }
             ans.add(list);
         }
        return ans;
    }
}
