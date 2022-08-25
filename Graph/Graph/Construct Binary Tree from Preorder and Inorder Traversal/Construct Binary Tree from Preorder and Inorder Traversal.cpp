
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
    int preIndex;
    unordered_map <int,int> inorderIndexMap;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       preIndex = 0;
       for(int i = 0; i < inorder.size(); i++)
           inorderIndexMap[ inorder[i] ] = i;
      // for(int i = 0; i < inorder.size(); i++)
         //  inorderIndexMap[ inorder[i] ] = 0;
        return arrayToTree(preorder, 0, inorder.size() - 1);
    }
    TreeNode* arrayToTree(vector<int>& preorder, int left, int right){
        if(left > right ) return NULL;
        TreeNode* root = new TreeNode(preorder[preIndex]);
        preIndex++;
        root->left = arrayToTree(preorder,left, inorderIndexMap[root->val] - 1);
        root->right =arrayToTree(preorder, inorderIndexMap[root->val] + 1, right);
        return root;
    }
};
