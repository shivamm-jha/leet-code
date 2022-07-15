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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int> ans;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                TreeNode * node = q.front();
				
				// storing level order traversal in a vector
                temp.push_back(node->val);
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
            }
			// insert the last element of level order traversal in our final ans. vector
			
            ans.push_back(temp[temp.size()-1]);
        }
        return ans;
    }
};