class Solution {
public:
    int dp[10000][3];
    int solve(vector<int>&nums,int i, int buy ){
        if(i>=nums.size() ) return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        if(buy==1){
            return dp[i][buy] = max(-nums[i]+solve(nums,i+1,0), solve(nums,i+1,1));
        }
        else{
            return dp[i][buy] = max(nums[i]+solve(nums,i+2,1), solve(nums,i+1,0));
        }
        
        
        
        
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,1);
    }
};