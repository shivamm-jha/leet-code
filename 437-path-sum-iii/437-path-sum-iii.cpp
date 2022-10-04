
class Solution {
public:
    int ans = 0;
    void solve(TreeNode * root, long long target){
        if(root==NULL) return ;
        if(target==root->val)ans++;
        
        solve(root->left,target-root->val);
        solve(root->right,target-root->val);
        
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        solve(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return ans;
    }
};