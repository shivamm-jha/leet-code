class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n= grid.size();
        int m = grid[0].size();
        if(grid[0][0] || grid[n-1][m-1])return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        vector<vector<int>> directions = {{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
        while(!q.empty()){
            auto curr = q.front();
            int x = curr.first, y=curr.second;
            if(x==n-1 && y==m-1) return grid[x][y];
            
            for(auto direction : directions){
                int nx = x + direction[0];
                int ny = y + direction[1];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==0){
                    q.push({nx,ny});
                    grid[nx][ny]=grid[x][y]+1;
                }
            }
            q.pop();
        }
        return -1;
    }
};


// queue<pair<int, int>> queue;
//     queue.push(make_pair(0,0));
//     vector<vector<int>> directions = {{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
//     grid[0][0] = 1;
//     while(!queue.empty()){
//         auto curr = queue.front();
//         int x = curr.first, y = curr.second;
//         if( x == row -1 && y == col -1) return grid[x][y];
        
//         for(auto direction : directions){
//             int nx = x + direction[0];
//             int ny = y + direction[1];
//             if(nx >= 0 && nx < row && ny >= 0 && ny < col && grid[nx][ny] == 0){
//                 queue.push(make_pair(nx,ny));
//                 grid[nx][ny] = grid[x][y] + 1;
//             }
//         }
//         queue.pop();
//     }
//     return -1;
// }