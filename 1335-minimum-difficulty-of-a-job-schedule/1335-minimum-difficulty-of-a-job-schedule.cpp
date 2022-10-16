class Solution {
public:
    int dp[11][301];
    
    int solve(vector<int>&nums, int d, int i){
        if(d==1){
            return *max_element(nums.begin()+i,nums.end());
            
        }
        
        int result=INT_MAX, ans = INT_MIN;
        
        if(dp[d][i]!=-1)return dp[d][i];
        for(int j=i;j<=nums.size()-d;j++){
            ans= max(ans,nums[j]);
            result= min(result,ans+solve(nums,d-1,j+1));
            
        }
        
        return  dp[d][i]=  result;
    }
    int minDifficulty(vector<int>& nums, int d) {
        if(nums.size()<d)return -1;
        memset(dp,-1,sizeof(dp));
        return solve(nums,d,0);
    }
};