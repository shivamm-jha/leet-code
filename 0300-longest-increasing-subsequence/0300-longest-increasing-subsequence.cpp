class Solution {
public:
    int dp[2501][2501];
    int solve(vector<int>&nums, int i, int prev_i){
        if(i>=nums.size())return 0;
        int take =0;
        if(dp[i][prev_i+1]!=-1)return dp[i][prev_i+1];
        int dontTake = solve(nums,i+1,prev_i);
        if(prev_i==-1 || nums[i]>nums[prev_i]){
            take = 1+ solve(nums,i+1,i);
        }
        return dp[i][prev_i+1]=max(take,dontTake);
    }
    int lengthOfLIS(vector<int>& arr) {
//          memoization
//         memset(dp,-1,sizeof(dp));
        
        
//         return solve(nums,0,-1);
        
        
//          tabulation
//         int dp[2600][2600]={0};
        
//         for(int curr_idx=0;curr_idx<2600;curr_idx++){
            
//             for(int prev_idx=-1;prev_idx<curr_idx;prev_idx++){
//                 int len = dp[curr_idx+1][prev_idx+1];
//                 if(prev_idx==-1 || nums[prev_idx]<nums[curr_idx]){
//                     len = max(len, 1 + dp[curr_idx+1][curr_idx+1]);
//                 }
//                 dp[curr_idx][prev_idx+1]=len;
                
//             }
//         }
        
        
//         return dp[2599][2599];
        
        vector<int> temp;
    temp.push_back(arr[0]);
    
    int len = 1;
        int n = arr.size();
        
    for(int i=1; i<n; i++){
        if(arr[i]>temp.back()){
           // arr[i] > the last element of temp array 
           
           temp.push_back(arr[i]);
           len++;
           
        } 
        else{
	// replacement step
            int ind = lower_bound(temp.begin(),temp.end(),arr[i]) - temp.begin();
            temp[ind] = arr[i];
        }
        
    }
    
    return len;
    }
};