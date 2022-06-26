class Solution {
public:
    #define ll long long
    int mod = 1e9 + 7;;
    ll dp[100000];
    ll solve(int n){
        if(n==0) return 1;
        if(n==1) return 2;
        if(dp[n]!=-1)return dp[n];
        ll pick = solve(n-2);
        ll npick = solve(n-1);
        return dp[n]=(pick+npick)%mod;
        
    }
    int countHousePlacements(int n) {
        memset(dp,-1,sizeof(dp));
        ll ans = solve(n);
        return ans*ans %mod;
    }
    

};


// int countHousePlacements(int n) {
//         vector<long long> dp(n + 10);
//         int mod = 1e9 + 7;
//         dp[0] = 1, dp[1] = 2;
//         for (int i = 2; i <= n; ++i)
//             dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
//         return dp[n] * dp[n] % mod;
//     }



