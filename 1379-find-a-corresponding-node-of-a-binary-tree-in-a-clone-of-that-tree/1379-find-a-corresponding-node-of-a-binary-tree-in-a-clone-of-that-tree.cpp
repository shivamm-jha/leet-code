/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode * bfs(TreeNode * cloned, TreeNode * target){
        queue<TreeNode*> q;
        q.push(cloned);
        while(!q.empty()){
            int n= q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                if(node->val==target->val){
                    return node;
                }
            }
            
        }
        
        return NULL;
    }
    
//      recurrsive inorder approach ...
    
    
    // TreeNode * ans= NULL;
    // void inorder(TreeNode * cloned, TreeNode * target){
    //     if(cloned!=NULL){
    //         inorder(cloned->left,target);
    //         if(cloned->val==target->val){
    //             ans=cloned; return;
    //         }
    //         inorder(cloned->right,target);
    //     }
    // }
    
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        // inorder(cloned,target);
        
        // return ans;
        
        return bfs(cloned,target);
        
    }
};