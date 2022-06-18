class Solution {
public:
    int dp[101][101];
    int solve(int i , int j, int n, int m){
        if(i> n || j >m)return 0;
        if(i==n && j==m) return 1;
        int right=0, down =0;
        if(dp[i][j]!=-1) return dp[i][j];
        right = solve(i,j+1,n,m);
        down = solve(i+1,j,n,m);
        return dp[i][j]=right + down;
    }
    int uniquePaths(int m, int n) {
        
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m-1,n-1);
        
    }
};