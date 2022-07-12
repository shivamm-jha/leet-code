class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode * node = q.front();
                q.pop();
                TreeNode * left = node->left;
                node->left = node->right;
                node->right = left;
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
        }
        
        return root;
    }
};