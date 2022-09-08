/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    string res = "";
    int ind = 0;
    void  dfs (TreeNode* root){
        if( root != NULL ){
            res += to_string(root->val);
            res += ",";
            dfs(root->left);
            dfs(root->right);
        }
        else{
            res += "n";
            res += ",";
        }
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
       dfs(root);
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() < 1) return NULL;
        return helper_deserialize(data);
    }
    TreeNode* helper_deserialize(string& data ) {
        if(ind == data.size() ) return NULL;
        string t = "";
        while( ind < data.size() && data[ind] != ','){
            t += data[ind];
            ind ++;
        }
        ind++;
        if(t == "n")
            return NULL;
        TreeNode * curr = new TreeNode(stoi(t));
        curr->left = helper_deserialize( data );
        curr->right = helper_deserialize( data );
        return curr;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
