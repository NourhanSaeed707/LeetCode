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
    bool isSameTree(TreeNode* p, TreeNode* q) {
      // here we end up by each p == q cause we iterate over all nodes and we're not get into return false.
         if(!p &&!q)return true;  
      // here mean that size of (p) != size of (q) and that mean they're not equal.
         if(!p || !q) return false;
      // value of each one of them doesn't equal.
         if(p->val != q->val) return false;
      //recursion line .
         return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
