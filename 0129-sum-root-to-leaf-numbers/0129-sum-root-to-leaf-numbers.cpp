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
//     int solve(TreeNode* root, int val){
//         //cout<<val<<endl;
//         if(root==NULL)return 0;
        
//         if(root->left==NULL && root->right==NULL){
//             return val*10+root->val;
//         }
        
//         int left = solve(root->left,val*10+root->val);
//         int right = solve(root->right,val*10+root->val);
        
//         return left+ right;
//     }
    
    int solve(TreeNode* root, int val){
        if(root==NULL)return 0;
        
        val = val*10+root->val;
        
        if(!root->left && !root->right){
            return val;
        }
        
        return solve(root->left,val) + solve(root->right,val);
    }
    int sumNumbers(TreeNode* root) {
        // if(!root->left && !root->right)return root->val;
        // return solve(root->left,root->val) + solve(root->right,root->val);
        
        return solve(root,0);
    }
};