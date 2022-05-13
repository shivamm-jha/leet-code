/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<vector<Node *>> ans;
    void levelOrder(Node * root){
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<Node *> temp;
            for(int i=0;i<n;i++){
                Node * node = q.front();
                q.pop();
                if(node->left!=NULL){
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    q.push(node->right);
                }
                temp.push_back(node);
            }
            ans.push_back(temp);
            
        }
        
    }
    Node* connect(Node* root) {
        if(!root) return root;
        levelOrder(root);
        for(int i=0;i<ans.size();i++){
            Node * node = ans[i][0];
            for(int j=1;j<ans[i].size();j++){
                node->next = ans[i][j];
                node = ans[i][j];
            }
            node->next=NULL;
        }
        return root;
    }
};