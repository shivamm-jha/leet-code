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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL && (root->left==NULL && root->right==NULL))return 0;
        queue<TreeNode*> q;
        int sum =0;
        q.push(root);
        
        
        
        while(!q.empty()){
            TreeNode * node= q.front();
            q.pop();
            if(node->left && node->left->left==NULL && node->left->right==NULL)sum+=node->left->val;
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            
        }
        return sum;
    }
};

// f(root == null || root.left == null && root.right == null) return 0;
        
//         int res = 0;
//         Queue<TreeNode> queue = new LinkedList<>();
//         queue.offer(root);
        
//         while(!queue.isEmpty()) {
//             TreeNode curr = queue.poll();

//             if(curr.left != null && curr.left.left == null && curr.left.right == null) res += curr.left.val;
//             if(curr.left != null) queue.offer(curr.left);
//             if(curr.right != null) queue.offer(curr.right);
//         }
//         return res;