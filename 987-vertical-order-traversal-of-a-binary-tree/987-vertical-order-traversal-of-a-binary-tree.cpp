
class Solution {
public:
    vector<pair<int,pair<int,int>>> ans;
    void solve(TreeNode * root,int x, int y){
        if(root){
            ans.push_back({root->val,{x,y}});
            solve(root->left,x+1,y-1);
            solve(root->right,x+1,y+1);
        }
        
        
        
        
    }
    
    static bool comp(pair<int,pair<int,int>> & a, pair<int,pair<int,int>> &b){
        if( a.second.second != b.second.second) return a.second.second < b.second.second;
        if( a.second.first != b.second.first) return a.second.first < b.second.first;
         return a.first < b.first;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)return res;
        
        
        
        solve(root,0,0);
        sort(ans.begin(),ans.end(),comp);
        //for(auto &it: ans)cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
       map<int,vector<int>> mp;
       for(auto &it: ans){
           mp[it.second.second].push_back(it.first);
       }
       
        
       
        
        for(auto &it: mp){
            vector<int> temp = it.second;
            //sort(temp.begin(),temp.end());
            res.push_back(temp);
        }
        return res;
    
    }
};