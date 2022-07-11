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
    int height(TreeNode * root){
        if(root==NULL)return 0;
        int left = 1+ height(root->left);
        int right = 1+ height(root->right);
        return min(left,right);
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        //return min(height(root->left),height(root->right))+1;
        queue<TreeNode*> q;
        q.push(root);
        int cnt=0;
        while(!q.empty()){
            int size = q.size();
            cnt++;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left==NULL && node->right==NULL)return cnt;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        return -1;
    }
};