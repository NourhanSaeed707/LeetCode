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
    vector<int> rightSideView(TreeNode* root) {
       vector<int> res;
        queue<TreeNode*> q;
        if(root == nullptr) return res;
        q.push(root);
        while( !q.empty() ){
            int n = q.size();
            TreeNode* right = nullptr;
            for(int i = 0; i < n; i++){
               //cout<<"q.pop() : "<< q.pop() << endl;
                TreeNode* curr = q.front();
                q.pop();
              if(i == 0) res.push_back(curr->val);
              if(curr->right != nullptr) q.push(curr->right);
              if(curr->left != nullptr) q.push(curr->left);
            }
        }
        return res;
    }
};
