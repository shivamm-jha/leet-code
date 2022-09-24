class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root)return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> v;
        
        int ans = 1, maxSum =INT_MIN , level =0;
        
        while(!q.empty()){
            int n = q.size();
            level++;
            int sum =0;
            
            for(int i=0;i<n;i++){
                auto node = q.front();
                q.pop();
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
                sum+=(node->val);
            }
            
            cout<<level<<" "<<sum<<endl;
            
           if(sum > maxSum){
               maxSum = sum;
               ans=level;
           }
            
        }
        
        

        return ans;
    }
};