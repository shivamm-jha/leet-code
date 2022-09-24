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
    
    void findPaths(TreeNode* root, vector<vector<int>>&ans, vector<int>empty,int targetSum){
        if(root==NULL)return;
        
        empty.push_back(root->val);
        
        if(root->val==targetSum && root->left==NULL && root->right==NULL){
            ans.push_back(empty);
            return;
        }
        
        
        findPaths(root->left,ans,empty,targetSum-root->val);
        
        findPaths(root->right,ans,empty,targetSum-root->val);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> empty;
        findPaths(root,ans,empty,targetSum);
        return ans;
    }
};