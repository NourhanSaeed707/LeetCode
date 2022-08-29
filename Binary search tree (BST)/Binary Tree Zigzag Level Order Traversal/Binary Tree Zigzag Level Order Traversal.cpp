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
    vector< vector<int>> res;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL) return res;
        q.push(root);
        int level = 0;
           while(!q.empty()) {
            int size = q.size();
            level++;
            vector<int> v;
            while(size--) {
                TreeNode* temp = q.front(); q.pop();
                v.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            if(level % 2 == 0)
                reverse(v.begin(), v.end());
            res.push_back(v);
        } 
        cout<<"level: "<<level<<endl;
        return res;
    }
};
