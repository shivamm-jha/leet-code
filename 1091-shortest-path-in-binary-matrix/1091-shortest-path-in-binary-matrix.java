class Solution {
    class pair{
        int x;
        int y;
        pair(int x,int y){
            this.x=x;
            this.y=y;
        }
    }
   
    public int shortestPathBinaryMatrix(int[][] grid) {
        int n= grid.length;
        int m = grid[0].length;
        if(grid[0][0]==1 || grid[n-1][m-1]==1){
            return -1;
        }
        
        int dir[][]={{1,1}, {0,1},{1,0},{0,-1},{-1,0},{-1, -1},{1, -1},{-1, 1}};
        Queue<pair> q = new LinkedList<>();
        q.add(new pair(0,0));
        grid[0][0]=1;
        // int count =1;
        
        while(!q.isEmpty()){
            pair node = q.peek();
            int x = node.x;
            int y = node.y;
            if(x==n-1 && y==m-1) return grid[x][y];
            for(int a[]: dir){
                int nx= x+ a[0];
                int ny =y + a[1];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==0){
                    q.add(new pair(nx,ny));
                    grid[nx][ny]= grid[x][y]+1;
                }
            }
            
            q.poll();
            
        }
        
        return -1;
    }
}