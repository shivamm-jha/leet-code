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
//     void inorder(TreeNode * root , vector<int> & v){
//         if(root!=NULL){
//             inorder(root->left,v);
//             v.push_back(root->val);
//             inorder(root->right,v);
//         }
        
//     }
// //     helper function..
    
//     void check(TreeNode * root,vector<int>&v,int &i){
//         if(!root)return;
//         check(root->left,v,i);
//         if(root->val!=v[i]){
//             root->val=v[i];
//         }
//         i++;
//         check(root->right,v,i);
//     }
    
//      main function...
    TreeNode * prev=NULL,*first=NULL,*second=NULL;
    void inorder(TreeNode *curr){
        if(curr==NULL)return;
        inorder(curr->left);
        if(prev!=NULL && prev->val > curr->val){
            if(first==NULL){
                first=prev;
            }
            second=curr;
        }
        prev=curr;
        inorder(curr->right);
    }
    void recoverTree(TreeNode* root) {
        // int i =0;
        // vector<int> v;
        // inorder(root,v);
        // sort(v.begin(),v.end());
        // check(root,v,i);
        
        
//          0(1) S.C solution
        inorder(root);
        int temp = first->val;
        first->val=second->val;
        second->val=temp;
        
    }
};
