class Solution {
public:
    int dp[201][20001];
    bool solve(vector<int>&nums, int idx, int sum){
        if(idx==nums.size() || sum<=0){
            // if(sum==0)return true;
            // return false;
            return sum ==0;
        }
       // if(sum<0)return false;
        if(dp[idx][sum]!=-1)return dp[idx][sum];
        
        bool take = solve(nums,idx+1,sum-nums[idx]);
        bool notTake = solve(nums,idx+1,sum);
        
        return  dp[idx][sum]  = take || notTake;
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto &it: nums)sum+=it;
        if(sum%2!=0)return false;
        
        memset(dp,-1,sizeof(dp));
        
        return solve(nums,0,sum/2);
        
    }
};



//     int dp[201][20001];
//     bool solve(vector<int> &nums, int n, int sum)
//     {
//         if (n <= 0 || sum <= 0)
//             return sum == 0;
        
//         if (dp[n][sum] != -1)
//             return dp[n][sum];
        
//         if (nums[n-1] > sum)
//             return dp[n][sum] = solve(nums, n-1, sum);
//         else
//             return dp[n][sum] = solve(nums, n-1, sum) || solve(nums, n-1, sum-nums[n-1]);
//     }
    
//     bool canPartition(vector<int>& nums) 
//     {
//         int sum = 0;
//         memset(dp, -1, sizeof(dp));
        
//         for(int i = 0; i < nums.size(); i++)
//             sum += nums[i];
        
//         if (sum % 2 != 0) 
//             return false;
        
//         return solve(nums, nums.size(), sum/2);
//     }
// };

