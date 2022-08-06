class Solution {
public:
    int dp[10001][20];
    int solve(vector<int>&coins, int amount, int i){
        if(i==coins.size()-1){
            if(amount%coins[i]==0)return amount/coins[i];
            return 1e9;
        }
        if(dp[amount][i]!=-1)return dp[amount][i];
        int notTake = 0+ solve(coins,amount,i+1);
        int take = INT_MAX;
        if(amount>=coins[i]){
             take = 1+solve(coins,amount-coins[i],i);
        }
        return dp[amount][i]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans = solve(coins,amount,0);
        return ans>=1e9 ? -1 : ans;
    }
};