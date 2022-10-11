class Solution {
public:
    int dp[1000001];
    int solve(vector<int>&nums, int target, int n){
        if(target==0)return 1;
        
        int ans = 0;
        
        if(dp[target]!=-1)return dp[target];
        
        for(int i=0;i<n;i++){
            if(nums[i]<=target){
                ans+=solve(nums,target-nums[i],n);
            }
        }
        
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,target,nums.size());
        
    }
};