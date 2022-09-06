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
public:
    vector<int> v;
    void storeTree(TreeNode* root){
        if( root == NULL) return;
        storeTree(root->left);
        v.push_back(root->val);
        storeTree(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        if( root != NULL ) 
            storeTree(root);
        return v[k-1];
    }
};
