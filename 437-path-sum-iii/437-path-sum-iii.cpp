
class Solution {
public:
    int ans = 0;
    void solve(TreeNode * root, long long target){
        if(root==NULL) return ;
        if(target==root->val)ans++;
        target= target- root->val;
        
        solve(root->left,target);
        solve(root->right,target);
        
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        solve(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return ans;
    }
};