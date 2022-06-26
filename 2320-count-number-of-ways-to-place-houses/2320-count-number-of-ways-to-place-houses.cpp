class Solution {
public:
    int mod = 1e9+7;
    int sol(int n, vector<int>&dp)
    {
        if(n < 0) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        int place = sol(n-2,dp);
        int not_place = sol(n-1,dp);
        
        return dp[n] = (place + not_place) % mod;
    }
    
    int countHousePlacements(int n) {
        vector<int>dp(n,-1);
        sol(n-1,dp);
        return (1LL * dp[n-1] * dp[n-1]) % mod;
    }
};