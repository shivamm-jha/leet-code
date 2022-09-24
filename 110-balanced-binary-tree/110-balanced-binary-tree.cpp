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
    
//     T.c = 0(N^2) , height is 0(N) and solve is 0(N)
    
//     int height(TreeNode * root){
//         if(root==NULL)return 0;
        
//         return max(1+height(root->left), 1+ height(root->right));
//     }
    
//     bool solve(TreeNode * root){
//         if(root==NULL) return true;
        
//         int left = height(root->left);
//         int right = height(root->right);
        
//         if(abs(left-right)>1)return false;
//         return solve(root->left) && solve(root->right);
//     }
    
    
    int check(TreeNode * root, bool &ans){
        if(!root)return 0;
        if(!ans)return 0;
        int leftTree = check(root->left,ans);
        int rightTree = check(root->right,ans);
        
        if(abs(leftTree-rightTree)> 1){
            ans= false;
            
        }
        
        return 1+ max(leftTree,rightTree);
    }
    
    
    bool isBalanced(TreeNode* root) {
        // return solve(root);
        bool ans = true;
        
        check(root,ans);
        return ans;
    }
};