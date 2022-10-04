class Solution {
public:
    bool dfs(TreeNode * root, int target){
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL && target-root->val==0)return true;
        int left = dfs(root->left,target-root->val);
        int right = dfs(root->right,target-root->val);
        return left || right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum);
    }
};

