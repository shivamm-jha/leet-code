class Solution {
public:
    int ans =0;
    void dfs(TreeNode* root, int num){
        num = num*2 + root->val;
        if(!root->left && !root->right){
            ans+= num;
            return;
        }
        if(root->left)dfs(root->left,num);
        if(root->right)dfs(root->right,num);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root,0);
        return ans;
    }
};

// void dfs(TreeNode *root, int buff){
//         buff = buff*2 + root->val;
//         if(!root->left && !root->right){
//             ans += buff;
//             return;
//         }
//         if(root->left) dfs(root->left, buff);
//         if(root->right) dfs(root->right, buff);
//     }