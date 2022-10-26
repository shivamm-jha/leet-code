class Solution {
public:
//     int mod = 1e9+7;
    
//     int solve(vector<vector<int>>&nums,int i, int j, int k,int sum,vector<vector<vector<int>>> &dp){
        
//         if(i>=nums.size() || j>=nums[0].size())return 0;
//         if(dp[i][j][sum]!=-1)return dp[i][j][sum];
        
//         if(i==nums.size()-1 && j==nums[0].size()-1){
//             sum+= nums[i][j];
//             if(sum%k==0)return 1;
//         }
        
//          int right = solve(nums,i,j+1,k,(sum+nums[i][j])%k,dp);
//          int down = solve(nums,i+1,j,k,(sum+nums[i][j])%k,dp);
        
//          return  dp[i][j][sum] =  (right%mod + down%mod)%mod;
//     }
    
    
    
    
//     int numberOfPaths(vector<vector<int>>& grid, int k) {
//         // int n = grid.size();
//         // int m = grid[0].size();
//          int m=grid.size(), n=grid[0].size();
//         vector<vector<vector<int>>> dp(m, vector<vector<int>> (n, vector<int> (k, -1)));
//         //memset(dp,-1,sizeof(dp));
//         return solve(grid,0,0,k,0,dp)%mod;
        
//     }
    
int mod = 1e9+7;
    int help(int i, int j, int sum, int &k, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp)
    {
        if(i<0 || j<0) return 0;
        
        if(i==0 && j==0) return (sum + grid[0][0])%k==0;
        
        if(dp[i][j][sum]!=-1) return dp[i][j][sum];
        
        int top = help(i-1, j, (sum+grid[i][j])%k, k, grid, dp);
        
        int left = help(i, j-1, (sum+grid[i][j])%k, k, grid, dp);
        
        return dp[i][j][sum]=(top+left)%mod;
    }
    
    int numberOfPaths(vector<vector<int>>& grid, int k) 
    {
        int m=grid.size(), n=grid[0].size();
        vector<vector<vector<int>>> dp(m, vector<vector<int>> (n, vector<int> (k, -1)));
        return help(m-1, n-1, 0, k, grid, dp);
    }


};







