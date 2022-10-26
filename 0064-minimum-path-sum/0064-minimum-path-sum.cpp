class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>&nums, int i,int j){
        if(i>=nums.size() || j>=nums[0].size())return 1e9;
        if(i==nums.size()-1 && j==nums[0].size()-1){
            return nums[i][j];
        }
        if(dp[i][j]!=-1)return dp[i][j];
        int right = nums[i][j]+ solve(nums,i,j+1);
        int down =nums[i][j]+ solve(nums,i+1,j);
        
        return  dp[i][j]= min(right,down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0);
    }
};