class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> vis(n,vector<int>(m,0));
        
        queue<pair<pair<int,int>,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({{i,j},0});
            }
        }
        
        vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
        
        int time =0;
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
            int x = node.first.first;
            int y = node.first.second;
            vis[x][y]=1;
            
             time = node.second;
            
            for(auto &it:dir){
                int nx= x + it.first;
                int ny = y + it.second;
                
                if(nx>=0 && nx<n && ny>=0 &&ny<m && grid[nx][ny]==1 && vis[nx][ny]==0){
                    grid[nx][ny]=2;
                    q.push({{nx,ny},time+1});
                    
                }
            }
        }
                                                                            
    
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(grid[i][j]==1)return -1;
             }
         }                                                                  
                                                                            
                                                                            
          return time;                                                  
                                                                            
                                                                            
    }
};