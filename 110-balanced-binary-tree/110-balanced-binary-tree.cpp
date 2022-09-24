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
    int height(TreeNode * root){
        if(root==NULL)return 0;
        
        return max(1+height(root->left), 1+ height(root->right));
    }
    
    bool solve(TreeNode * root){
        if(root==NULL) return true;
        
        int left = height(root->left);
        int right = height(root->right);
        
        if(abs(left-right)>1)return false;
        return solve(root->left) && solve(root->right);
    }
    bool isBalanced(TreeNode* root) {
        return solve(root);
    }
};