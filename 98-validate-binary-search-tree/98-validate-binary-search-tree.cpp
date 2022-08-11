class Solution {
public:
    bool dfs(TreeNode * root, long low, long high){
           if(root==NULL)return true;
           if(root->val <=low || root->val>=high)return false;
           bool left =  dfs(root->left,low,root->val);
           bool right = dfs(root->right,root->val,high);
           return left && right;
    }
    bool isValidBST(TreeNode* root) {
        return dfs(root,LONG_MIN,LONG_MAX);
    }
};