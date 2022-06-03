class Solution {
public:
     // recurrsive code ( T.C = 2^N) still bad
//     int solve(vector<int>& nums , int i , int prev){
//         if(i>= nums.size())return 0;
//         int take =0;
//         int dontTake = solve(nums,i+1,prev);
//         if(nums[i]> prev){
//             take = 1 + solve(nums,i+1,nums[i]);
//         }
//         return max(take,dontTake);
        
//     }
    
//     RECURSSION + MEMOIZATION
    int dp[2600][2600];
    int solve(vector<int>& nums , int i , int prev_i){
        if(i>= nums.size())return 0;
        int take =0;
        if(dp[i][prev_i+1]!=-1)return dp[i][prev_i+1];
        int dontTake = solve(nums,i+1,prev_i);
        if(prev_i==-1 || nums[i]> nums[prev_i]){
            take = 1 + solve(nums,i+1,i);
        }
        return dp[i][prev_i+1]=max(take,dontTake);
        
    }
    
   
    int lengthOfLIS(vector<int>& nums) {
//          recurrsive call...
        // return solve(nums,0,INT_MIN);
        
//         dp
        memset(dp,-1,sizeof(dp));
        return solve(nums,0,-1);
        
    }
};
