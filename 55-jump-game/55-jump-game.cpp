class Solution {
public:
    int dp[10001];
//      recurrsion + memoization...
//     T.C = 0(N) , S.C = 0(N)
    bool solve(vector<int>&nums, int i){
        if(i==nums.size()-1)return true;
        if(nums[i]==0) return false;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=nums[i];j++){
            if(solve(nums,i+j)){
                return dp[i]=true;
            }
        }
        return dp[i]=false;
    }
    bool canJump(vector<int>& nums) {
        // memset(dp,-1,sizeof(dp));
        // return solve(nums,0);
        
        
        int reachable =0;
        for(int i=0;i<nums.size();i++){
            if(i> reachable) return false;
           
            if(nums[i]!=0)reachable = max(reachable, i+ nums[i]);
            
        }
        
        return reachable >= nums.size()-1 ? true : false;
    }
};

