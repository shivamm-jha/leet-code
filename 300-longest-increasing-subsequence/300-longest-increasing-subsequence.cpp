class Solution {
public:
    int dp[2501][2501];
    int solve(vector<int>&nums, int i, int prev_idx){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][prev_idx+1]!=-1)return dp[i][prev_idx+1];
        int dontTake = solve(nums,i+1,prev_idx);
        int take =0;
        if(prev_idx==-1 || nums[prev_idx]<nums[i]){
            take = 1+ solve(nums,i+1,i);
        }
        return dp[i][prev_idx+1]=max(take,dontTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,-1);
    }
};