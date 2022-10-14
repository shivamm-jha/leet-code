class Solution {
public:
    bool solve(TreeNode * root1 , TreeNode * root2){
        if(root1==NULL || root2==NULL){
            return root1==root2;
        }
        if(root1->val!=root2->val)return false;
        return solve(root1->left,root2->right) && solve(root1->right,root2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        
//         iterative bfs solution..
        
//         if(!root)return true;
//         queue<TreeNode*> q1, q2;
//         q1.push(root->left);
//         q2.push(root->right);
//         TreeNode * left, *right;
//         while(!q1.empty() && !q2.empty()){
//             left= q1.front();
//             q1.pop();
//             right = q2.front();
//             q2.pop();
//             if(left==NULL && right==NULL)continue;
//             else if(left==NULL  || right==NULL) return false;
//             else if(left->val!=right->val)return false;
//             q1.push(left->left);
//             q1.push(left->right);
//             q2.push(right->right);
//             q2.push(right->left);
            
//         }
//         return true;
        
//          recurrsive code...
        
         
        
        return root==NULL || solve(root->left,root->right);
    }
};
