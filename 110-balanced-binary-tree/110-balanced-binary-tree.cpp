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
        if(root==NULL){
            return 0;
        }
        
        int leftHeight = height(root->left);
        if(leftHeight==-1) return -1;
        int rightHeight = height(root->right);
        if(rightHeight==-1) return -1;
        if(abs(leftHeight-rightHeight)>1) return -1;
        return max(leftHeight,rightHeight) +1;
    }
    bool isBalanced(TreeNode* root) {
//          T.c= 0(N^2) bcoz 0(N) for checking the height and 0(N) for traversal
        
//         if(root==NULL) return true;
//         int leftHeight = height(root->left);
//         int rightHeight = height(root->right);
//         if(abs(leftHeight-rightHeight)>1) return false;
//         bool left = isBalanced(root->left);
//         bool right = isBalanced(root->right);
//         if(!left || !right) return false;
        
//         return true;
        
        
//          we can reduce it to 0(N) 
//         The approach is a slight modification in the height function
//         after finding the height of the left and right subtree 
//          we will check if their absolute difference is less than equal to 1
//          if not then there itself we will return -1
        
        return height(root)!=-1;
        
    }
};