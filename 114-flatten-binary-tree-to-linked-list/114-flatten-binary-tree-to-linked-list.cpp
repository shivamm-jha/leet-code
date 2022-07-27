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
    void preorder(TreeNode * root,vector<TreeNode*>&v){
        if(root!=NULL){
            v.push_back(root);
            preorder(root->left,v);
            preorder(root->right,v);
        }
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*> v;
        preorder(root,v);
        TreeNode * curr=root;
        for(auto &it: v)cout<<it->val<<" ";
        cout<<endl;
        int i =1;
        while(i<v.size()){
            TreeNode * newNode = new TreeNode(v[i]->val);
            curr->left=NULL;
            curr->right=newNode;
            curr=newNode;
            i++;
            
        }
        
    }
};