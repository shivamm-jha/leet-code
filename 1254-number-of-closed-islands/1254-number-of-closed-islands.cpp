class Solution {
public:
    void bfs(vector<vector<int>>&grid, int i, int j, int n, int m){
        queue<pair<int,int>> q;
        q.push({i,j});
        grid[i][j]=1;
        
        vector<pair<int,int>> dir = {{-1,0},{1,0},{0,1},{0,-1}};
        
        
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int x = node.first;
            int y = node.second;
            
            for(auto &it: dir){
                int nx = it.first + x;
                int ny = it.second + y;
                
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==0 ){
                    grid[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }
    }
    
    
    
    int closedIsland(vector<vector<int>>& grid) {
        int cnt =0;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 || j==m-1) and grid[i][j]==0){
                     bfs(grid,i,j,n,m);
                }
            }
        }
        
        
        for(int i=1;i<n-1;i++){
            for(int j=1;j<m-1;j++){
                if(grid[i][j]==0){
                    bfs(grid,i,j,n,m);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};





//  void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int i, int j, int m, int n)
//     {
//         queue<pair<int,int>> q;
//         q.push({i,j});
// 		vis[i][j]=1;
//         while(q.empty()!=1)
//         {
//             pair<int,int> curr = q.front();
//             q.pop();
//             vector<int> dx{-1,1,0,0};
//             vector<int> dy{0,0,1,-1};
//             for(int k=0;k<4;k++)
//             {
//                 int X = curr.first+dx[k];
//                 int Y = curr.second+dy[k];
//                 if(X>=0 && X<m && Y>=0 && Y<n && grid[X][Y]==0 && vis[X][Y]==0)
//                 {
//                     q.push({X,Y});
//                     vis[X][Y]=1;
//                 }
//             }
//         }
//     }

    
//     int closedIsland(vector<vector<int>>& grid) 
//     {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int>> vis(m,vector<int>(n,0));
  
        
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if((i*j==0 || i==m-1 || j==n-1)&& grid[i][j]==0 && vis[i][j]==0)
//                {
//                   bfs(grid, vis, i, j, m, n);
//                }     
//             }
//         }
//         int ans = 0;
//         for(int i=1;i<m-1;i++)
//         {
//             for(int j=1;j<n-1;j++)
//             {
//                 if(grid[i][j]==0 && vis[i][j]==0)
//                 {
//                     bfs(grid,vis,i,j,m,n);
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };