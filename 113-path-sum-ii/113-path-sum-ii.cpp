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
    
    void solve(TreeNode * root, int target, vector<vector<int>>&paths, vector<int>empty){
        if(root==NULL)return;
        
        empty.push_back(root->val);
        if(root->left==NULL && root->right==NULL && target-root->val==0){
            paths.push_back(empty);
            return ;
        }
        
        solve(root->left,target-root->val,paths,empty);
        solve(root->right,target-root->val,paths,empty);
        
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> empty;
        vector<vector<int>> paths;
        solve(root,targetSum,paths, empty);
        return paths;
    }
};