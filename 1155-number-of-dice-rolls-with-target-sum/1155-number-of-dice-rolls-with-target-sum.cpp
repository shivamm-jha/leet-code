class Solution {
public:
    int mod = 1e9+7;
    int dp[31][1001];
    int solve(int d, int f, int target){
        if(d==0 && target ==0 )return 1;
        
        if(d<=0 || target<=0) return 0;
        
        if(dp[d][target]!=-1)return dp[d][target];
        
        int sum = 0;
        
        for(int i=1;i<=f;i++){
            sum= (sum% mod + solve(d-1,f,target-i)%mod) %mod;
        }
        
        return dp[d][target]=sum;
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
    }
};

