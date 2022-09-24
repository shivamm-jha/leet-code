class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        
        if(!root)return postorder;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            auto node = st.top();
            st.pop();
            
            postorder.push_back(node->val);
            
            if(node->left)st.push(node->left);
            if(node->right)st.push(node->right);
        }
        
        reverse(postorder.begin(),postorder.end());
        return postorder;
    }
};