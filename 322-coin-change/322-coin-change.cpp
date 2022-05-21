class Solution {
public:
    int dp[10010];
    int minCoins(vector<int>&coins, int amount){
        if(amount==0) return 0;
        if(dp[amount]!=-1)return dp[amount];
        int ans = INT_MAX-1;
        for(int coin : coins){
            if(amount-coin>=0)
                ans= min(ans, minCoins(coins,amount-coin)+1);
        }
        return dp[amount]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans = minCoins(coins,amount);
        return ans==INT_MAX-1? -1 : ans;
    }
};