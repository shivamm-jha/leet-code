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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigzag;
        if(!root)return zigzag;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int flag=0;
        
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;
            for(int i=0;i<n;i++){
                auto node = q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                temp.push_back(node->val);
            }
            if(flag==1){
                reverse(temp.begin(),temp.end());
                flag=0;
            }
            else flag=1;
            
            zigzag.push_back(temp);
        }
        
        return zigzag;
    }
};