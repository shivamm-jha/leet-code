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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode * temp = new TreeNode(val);
            temp->left = root;
            root= temp;
            return root;
        }
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        
        while(!q.empty()){
            auto node = q.front().first;
            auto level = q.front().second;
            q.pop();
            
            if(level==depth-1){
                auto rightSubtree = node->right;
                auto leftSubtree = node->left;
                node->right = new TreeNode(val);
                node->left = new TreeNode(val);
                node->left->left = leftSubtree;
                node->right->right = rightSubtree;
                
            }
            
            if(level>= depth)break;
            
            if(node->left)q.push({node->left,level+1});
            if(node->right)q.push({node->right,level+1});
        }
        
        return root;
    }
};