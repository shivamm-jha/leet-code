class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int n = board.size();
        int m = board[0].size();
//          vector<vector<int>> dummy(n, vector<int>(m));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 dummy[i][j]=(board[i][j]);
//             }
//         }
        
        vector<vector<int>> dir ={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{1,1},{-1,1},{1,-1}};
        
// //          T.C = 0(N*M*8) , S.C = 0(N*M)
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 int x = i , y = j;
//                 int cnt =0;
//                 int nx,ny;
//                 for(auto val : dir){
//                     nx=x+val[0];
//                     ny=y+val[1];
//                     if(nx>=0 && nx<n && ny>=0 && ny<m){
//                         cnt+= dummy[nx][ny];
//                     }
//                 }
                
// //                 cond. 1
//                 if(dummy[i][j]==1 && cnt <2){
//                     board[i][j]=-1;
//                 }
// //                 cond. 2
//                 else if(dummy[i][j]==1 && (cnt==2|| cnt==3)){
//                     board[i][j]=1;
//                 }
// //                  cond. 3
//                 else if(dummy[i][j]==1 && cnt>3){
//                     board[i][j]=0;
//                 }
// //                 cond 4.
//                 else if(dummy[i][j]==0 && cnt==3){
//                     board[i][j]=1;
//                 }
//             }
//         }
        
        
//          without using extra space ...
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x= i, y =j;
                int count =0;
                int nx=0, ny=0;
                for(auto & val : dir){
                    nx= x+ val[0];
                    ny= y+ val[1];
                    
                    
                    if(nx>=0 && nx<n && ny>=0 && ny< m && abs(board[nx][ny])==1 ){
                        count++;
                    }
                }
                
                
                if(board[x][y]==1 && (count<2 || count>3)){
                    board[x][y]=-1;
                }
                if(board[x][y]==0 && count==3){
                    board[x][y]=2;
                }
            }
        }
        
    
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                board[i][j]= board[i][j] >=1 ? 1 : 0;
            }
        }
    }
};