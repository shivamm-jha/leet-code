class Solution {
public:
    
    void bfs(int i, int j, vector<vector<int>>& vis,vector<vector<char>>& grid){
        
        vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        
        vector<pair<int,int>> dir = {{-1,0},{1,1},{0,1},{0,-1}};
        
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            int x = node.first;
            int y = node.second;
            
            for(auto &it: dir){
                int nx = x +it.first;
                int ny = y+it.second;
                
                if(nx>=0 && nx< grid.size() && ny>=0 && ny<grid[0].size() && grid[nx][ny]=='1' && vis[nx][ny]==0){
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }
        
        
        
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0, offsets[] = {0, 1, 0, -1, 0};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    grid[i][j] = '0';
                    queue<pair<int, int>> todo;
                    todo.push({i, j});
                    while (!todo.empty()) {
                        pair<int, int> p = todo.front();
                        todo.pop();
                        for (int k = 0; k < 4; k++) {
                            int r = p.first + offsets[k], c = p.second + offsets[k + 1];
                            if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1') {
                                grid[r][c] = '0';
                                todo.push({r, c});
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }
};