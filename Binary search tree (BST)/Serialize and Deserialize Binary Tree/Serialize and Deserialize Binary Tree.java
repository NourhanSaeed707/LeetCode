/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Codec {
    String res = "";
    int ind = 0;
    public void dfs( TreeNode root){
        if( root != null ){
            res += String.valueOf(root.val);
            res += ",";
            dfs(root.left);
            dfs(root.right);
        }
        else{
            res += "n";
            res += ",";
        }
    }
    // Encodes a tree to a single string.
    public String serialize(TreeNode root) {
        dfs(root);
        return res;
    }
    public TreeNode helper_deserialize ( String  data ){
        if(ind == data.length() ) return null;
        String t = "";
        while( ind < data.length() && data.charAt(ind) != ',' ) {
            t += data.charAt(ind);
            ind ++;
        }
        ind++;
        if(t.equals("n")){
            return null;
        }
        TreeNode curr = new TreeNode( Integer.parseInt(t) );
        curr.left = helper_deserialize( data );
        curr.right = helper_deserialize( data );
        return curr;
    }
    // Decodes your encoded data to tree.
    public TreeNode deserialize(String data) {
        if(data.length() < 1) return null;
        return helper_deserialize(data);
    }
}

// Your Codec object will be instantiated and called as such:
// Codec ser = new Codec();
// Codec deser = new Codec();
// TreeNode ans = deser.deserialize(ser.serialize(root));
