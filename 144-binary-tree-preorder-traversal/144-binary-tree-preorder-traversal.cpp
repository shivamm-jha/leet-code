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
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> preorder;
        if(!root)return preorder;
        
        stack<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            auto node = q.top();
            q.pop();
            preorder.push_back(node->val);
            
            if(node->right)q.push(node->right);
            if(node->left)q.push(node->left);
            
        }
        
        return preorder;
        
        
    }
};
