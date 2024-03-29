class Solution {
public:
    //int dp[101][101];
//     int solve(int n, int m, int i, int j){
//         if(i>=n || j>=m) return 0;
//         if(i==n-1 && j==m-1)return 1;
//         if(dp[i][j]!=-1)return dp[i][j];
//         int right= solve(n,m,i,j+1);
//         int down = solve(n,m,i+1,j);
//         return dp[i][j]=right+down;
        
//     }
    int uniquePaths(int m, int n) {
        // memset(dp,-1,sizeof(dp));
        // return solve(m,n,0,0);
        
        int dp[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 || j==0)dp[i][j]=1;
                else dp[i][j]= dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};

