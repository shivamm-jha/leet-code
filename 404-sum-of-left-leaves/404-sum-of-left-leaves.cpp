
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL) return 0;
        
        int sum = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            
            if(front->left && front->left->left==NULL && front->left->right==NULL){
                sum+= front->left->val;
            }
            
            if(front->left)q.push(front->left);
            
            if(front->right)q.push(front->right);
        }
        
        return sum;
    }
};
