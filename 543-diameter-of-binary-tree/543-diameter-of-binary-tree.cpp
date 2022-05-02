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
    int height(TreeNode * root, int &diameter){
        if(root==NULL) return 0;
        int leftHeight = height(root->left,diameter);
        int rightHeight = height(root->right,diameter);
        diameter=max(diameter,leftHeight+rightHeight);
        return max(leftHeight,rightHeight)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
       
//  T.c = 0(N^2) bcoz of two we are traversing every node and calculating left height
//          and right height for every node.

        // if(root==NULL) return 0;
        // int leftHeight = height(root->left);
        // int rightHeight = height(root->right);
        // int lDiameter =  diameterOfBinaryTree(root->left);
        // int rDiameter =  diameterOfBinaryTree(root->right);
        // return max(leftHeight+rightHeight,max(lDiameter,rDiameter));
        
//         better solution , T.C = 0(N)
        int diameter = 0;
        height(root,diameter);
        return diameter;
    }
};