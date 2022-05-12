/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void invert(TreeNode* root){
        if(!root) return;
 // we keep going wide to the deep of tree until we arrive to last level .
        invert(root->left);
        invert(root->right);
        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
    }
public:
    TreeNode* invertTree(TreeNode* root) {
       invert(root);
       return root;
    }
};
