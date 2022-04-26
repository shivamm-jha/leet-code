class Solution {
public:
    void flipRow(vector<vector<int>> & v, int row){
        
        int m = v[0].size();
        for(int i=0;i<m;i++){
            v[row][i]==0? v[row][i]=1 : v[row][i]=0;
        }
        
    }
    void flipCol(vector<vector<int>> & v, int col){
         int n = v.size();
         for(int i=0;i<n;i++){
             v[i][col]==0? v[i][col]=1 : v[i][col]=0;
         }
    }
    
    int score(vector<vector<int>> & v){
        int n = v.size();
        int m = v[0].size();
        int res=0;
        for(int i=0;i<n;i++){
            int mul =0;
            for(int j=m-1;j>=0;j--){
                res+=pow(2,mul)* v[i][j];
                mul++;
            }
        }
        return res;
    }
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            if(grid[i][0]==0){
                flipRow(grid,i);
            }
        }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        for(int j=0;j<m;j++){
            int count =0;
            for(int i=0;i<n;i++){
                if(grid[i][j]==1)count++;
            }
            if(count<= n/2){
                flipCol(grid,j);
            }
        }
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<grid[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        int ans = score(grid);
        return ans;
        
        
    }
};