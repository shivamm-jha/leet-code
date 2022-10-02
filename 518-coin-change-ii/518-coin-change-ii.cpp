class Solution {
public:
    int dp[301][5001];
    int solve(int i,int amt, vector<int>&coins){
        if(amt==0)return 1;
        if(amt<0 || i==coins.size())return 0;
        
        
        int move1 = 0, move2=0;
        if(dp[i][amt]!=-1)return dp[i][amt];
        if(amt>=coins[i])move1+= solve(i,amt-coins[i],coins);
        
        move2+= solve(i+1,amt,coins);
        
        return dp[i][amt]=move1+move2;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return solve(0,amount,coins);
    }
};