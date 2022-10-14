class Solution {
public:
    
    void bfs(vector<vector<int>>& land, vector<vector<int>>&vis, vector<vector<int>>&ans, int i, int j)
    {
        queue<pair<int,int>> q;
        q.push({i,j});
        
        vector<int> t={i,j};
        
        
        
        int n = land.size();
        int m = land[0].size();
        
        
        
        
        vector<pair<int,int>> dir={{-1,0},{0,1},{1,0},{0,-1}};
        int x, y;
        int max_x=INT_MIN, max_y=INT_MIN;
        while(!q.empty()){
            auto node = q.front();
            q.pop();
             x = node.first;
             y = node.second;
              max_x=max(max_x,x);
                                                                                                        max_y= max(max_y,y);
            
            for(auto &it:dir){
                int nx = it.first + x;
                int ny = it.second + y;
                
                if(nx<n && nx>=0 && ny<m && ny>=0 && land[nx][ny]==1 && vis[nx][ny]==0){            max_x=max(max_x,nx);
                                                                                                        max_y= max(max_y,ny);
                                                                                        
                    q.push({nx,ny});
                    vis[nx][ny]=1;
                }
            }
            
        }
        
        t.push_back(max_x);
        t.push_back(max_y);
        ans.push_back(t);
        
        
        
    }
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
         int n = land.size();
         int m = land[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
       
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && land[i][j]==1){
                    bfs(land,vis,ans,i,j);
                }
            }
        }
        
        
        return ans;
        
        
    }
};