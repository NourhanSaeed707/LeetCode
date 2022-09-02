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
    vector<vector<int>> paths;
    vector<int> v;
    
   void helper (TreeNode* root, int sum, vector<int>& current ) {
      if( root == nullptr) return;
      if(root->val == sum && root->left == nullptr && root->right == nullptr ){
          current.push_back(root->val);
          paths.push_back(current);
          current.pop_back();
          return;
      }
       current.push_back(root->val);
      helper(root->left, sum - root->val, current);
      helper(root->right, sum - root->val, current);
       current.pop_back();
        
   }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
         vector<int> current;
        if( root == NULL ) return paths;
        else if(root->val == targetSum && root->right == NULL && root->left==NULL)           {
            current.push_back(root->val); 
            paths.push_back(current); return paths;
        }
       
       helper(root, targetSum , current);
        return paths;
    }
};
