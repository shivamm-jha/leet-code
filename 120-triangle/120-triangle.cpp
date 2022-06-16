class Solution {
public:
    int dp[1000][1000];
    int solve(vector<vector<int>> &nums , int i , int j){
        if(i==nums.size()) return 0;
        if(j==nums[i].size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int move1 = nums[i][j] + solve(nums,i+1,j);
        int move2 = nums[i][j] + solve(nums,i+1,j+1);
        return dp[i][j] = min(move1,move2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return solve(triangle,0,0);
    }
};