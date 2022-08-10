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
    TreeNode* createBinaryTree(vector<vector<int>>& nums) {
        map<int,TreeNode*> mp;
        set<TreeNode*> st;
        for(auto &it :nums){
            TreeNode * newNode;
            if(mp.find(it[0])!=mp.end()){
                newNode = mp[it[0]];
            }
            else {
                newNode = new TreeNode(it[0]);
                mp[it[0]]=newNode;
            }
            //  for left child...
            
            if(it[2]==1){
                if(mp.find(it[1])!=mp.end()){
                    newNode->left = mp[it[1]];
                }
                else{
                    newNode->left= new TreeNode(it[1]);
                    mp[it[1]]= newNode->left;
                }
                st.insert(newNode->left);
            }
            
//             for right child..
            
            else if(it[2]==0){
                if(mp.find(it[1])!=mp.end()){
                    newNode->right=mp[it[1]];
                }
                else{
                    newNode->right = new TreeNode(it[1]);
                    mp[it[1]]= newNode->right;
                }
                st.insert(newNode->right);
            }
        }
        TreeNode * root;
        for(auto &it :mp){
            if(st.find(it.second)==st.end()){
                root=it.second;
                break;
            }
        }
        
        return root;
    }
};