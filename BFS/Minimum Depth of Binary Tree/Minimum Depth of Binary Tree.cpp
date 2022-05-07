
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
    queue<TreeNode*> q;
    int BFS(TreeNode* root){
        int level = 0;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            level++;
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left ) q.push(temp->left);
                if(temp->right) q.push(temp->right);
              // to return shortest leaf that has no childern 
                if(temp->left == NULL && temp->right == NULL) return level;
            }
        }
        return level;
    }
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        return BFS(root);
    }
};
