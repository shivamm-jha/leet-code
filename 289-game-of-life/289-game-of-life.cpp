class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n = board.size();
        int m = board[0].size();
         vector<vector<int>> dummy(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dummy[i][j]=(board[i][j]);
            }
        }
        
        vector<vector<int>> dir ={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{1,1},{-1,1},{1,-1}};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x = i , y = j;
                int cnt =0;
                int nx,ny;
                for(auto val : dir){
                    nx=x+val[0];
                    ny=y+val[1];
                    if(nx>=0 && nx<n && ny>=0 && ny<m){
                        cnt+= dummy[nx][ny];
                    }
                }
                
//                 cond. 1
                if(dummy[i][j]==1 && cnt <2){
                    board[i][j]=0;
                }
//                 cond. 2
                else if(dummy[i][j]==1 && (cnt==2|| cnt==3)){
                    board[i][j]=1;
                }
                else if(dummy[i][j]==1 && cnt>3){
                    board[i][j]=0;
                }
                else if(dummy[i][j]==0 && cnt==3){
                    board[i][j]=1;
                }
            }
        }
    }
};