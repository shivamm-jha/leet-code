class Solution {
public:
    
    int solve(vector<int>&nums, int idx, int tranNo, int cap,vector<vector<int>>&dp){
        if(idx>=nums.size())return 0;
        if(2*cap==tranNo)return 0;
        
        if(dp[idx][tranNo]!=-1)return dp[idx][tranNo];
        if(tranNo%2==0 ){
            return dp[idx][tranNo]=max(-nums[idx]+solve(nums,idx+1,tranNo+1,cap,dp), solve(nums,idx+1,tranNo,cap,dp));
        }
        
        else{
            return dp[idx][tranNo]=max(nums[idx]+solve(nums,idx+1,tranNo+1,cap,dp), solve(nums,idx+1,tranNo,cap,dp));
        }
        return  dp[idx][tranNo] ;
    }
     
    
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>>dp(prices.size()+1,vector<int>(2*k+1,-1));
        
        return solve(prices,0,0,k,dp);
    }
};