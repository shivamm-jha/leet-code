class Solution {
public:
    int dp[100002][3][3];
    int solve(vector<int>&nums, int idx, bool flag, int cap){
        if(idx>=nums.size())return 0;
        if(cap==0)return 0;
        int profit=0;
        if(dp[idx][flag][cap]!=-1)return dp[idx][flag][cap];
        if(flag ){
            return profit+=max(-nums[idx]+solve(nums,idx+1,!flag,cap), solve(nums,idx+1,flag,cap));
        }
        
        else{
            return profit+=max(nums[idx]+solve(nums,idx+1,!flag,cap-1), solve(nums,idx+1,flag,cap));
        }
        return dp[idx][flag][cap] = profit;
    }
    int maxProfit(vector<int>& nums) {
        // memset(dp,-1,sizeof(dp));
        // return solve(prices,0,1,2);
        
        int n = nums.size();
        
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(5,vector<int>(5,0)));
        
        for(int i=n-1;i>=0;i--){
            for(int flag=0;flag<=1;flag++){
                for(int cap=1;cap<=2;cap++){
                    if(flag){
                        dp[i][flag][cap]= max(-nums[i]+ dp[i+1][0][cap], dp[i+1][1][cap]);
                    }
                    
                    else{
                        dp[i][flag][cap]= max(nums[i]+dp[i+1][1][cap-1], dp[i+1][0][cap]);
                    }
                }
            }
        }
        
        return dp[0][1][2];
    }
};