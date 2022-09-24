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
    
    int ans = INT_MIN;
    
    int height(TreeNode * root){
        if(!root)return 0;
        
        return 1 + max(height(root->left), height(root->right));
    }
    
    void solve(TreeNode * root){
        if(!root){
            return;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        ans= max(ans,left+right);
        
        solve(root->left);
        solve(root->right);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return ans;
    }
};