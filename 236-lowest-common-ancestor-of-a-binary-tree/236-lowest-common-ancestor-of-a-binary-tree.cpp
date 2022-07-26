/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root == NULL) return NULL;
        if(root->val  == p->val || root->val == q->val){
            return root;
        }
        TreeNode* l = lowestCommonAncestor(root->left, p, q);
         TreeNode* r = lowestCommonAncestor(root->right, p, q);
        if(l != NULL && r != NULL){
            return root;
        }
        else if(l != NULL){
            return l;
        }
        else{
            return r;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return solve(root, p, q);
    }
};