
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
    vector<vector<int>> res;
    vector<int> v;
    stack<int> bottomBFS;
    queue<TreeNode*> q;
    void BFS(TreeNode* root){
        int level = 0;
        q.push(root);
        while(!q.empty()){
            level++;
            int n = q.size();
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            res.push_back(v);
            v.clear();
        }
      // reverse 2D vector after we got all nodes of BFS.
        reverse(res.begin(), res.end());
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root == NULL) return res;
        BFS(root);
        return res;
    }
};
