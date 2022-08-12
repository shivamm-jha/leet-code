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
        if(root==NULL) return NULL;
        if(root->val==p->val || root->val ==q->val)return root;
        TreeNode * left=solve(root->left,p,q);
        TreeNode * right = solve(root->right,p,q);
        if(left==NULL)return right;
        if(right==NULL)return left;
        return root;
    }
    
//      function to find path from root to gven node..
    
    bool findPath(TreeNode * root,vector<TreeNode*>&path,TreeNode* key){
        if(root==NULL)return false;
        path.push_back(root);
        if(root==key){
            return true;
        }
        bool leftSubtree = findPath(root->left,path,key);
        if(leftSubtree)return true;
        bool rightSubtree = findPath(root->right,path,key);
        if(rightSubtree)return true;
        path.pop_back();
        return false;
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // return solve(root, p, q);
        
        vector<TreeNode*> path1,path2;
        findPath(root,path1,p);
        findPath(root,path2,q);
        int i=0;
        while(i<path1.size() && i<path2.size()){
            if(path1[i]==path2[i])i++;
            else break;
        }
        return path1[i-1];
    }
};