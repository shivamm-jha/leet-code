class Solution {
public:
    int dp[300][300];
    int solve(vector<vector<int>>&nums, int i, int j, int n,int m){
        //if(power<=0)return false;
        if(i>=n || j>=m)return INT_MAX;
        
        if(i==n-1 && j==m-1){
            return nums[i][j]<=0 ? abs(nums[i][j])+1 : 1;
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int right = solve(nums,i,j+1,n,m);
        int down = solve(nums,i+1,j,n,m);
        
        int mini = min(right,down) - nums[i][j];
        
        return dp[i][j] = mini <=0? 1 : mini;
        
        
        // return dp[i][j] =  right || down;
    
    }
    int calculateMinimumHP(vector<vector<int>>& nums) {
        
        memset(dp,-1,sizeof(dp));
        
        return solve(nums,0,0,nums.size(),nums[0].size());
        
//         int low =0, high = 1e9;
        
//         int ans = -1;
        
//         while(low<=high){
//             memset(dp,-1,sizeof(dp));
//             int mid = low + (high-low)/2;
//             // cout<<mid<<endl;
//             // cout<<solve(nums,0,0,mid)<<endl;
//             if(solve(nums,0,0,mid)==true){
                
//                 ans= mid;
//                 high = mid-1;
//             }
//             else low = mid+1;
//         }
        
//         return ans;
        
         
        
    }
};





// class Solution {
// public:
//     int dp[205][205];
//     int calculateMinimumHP(vector<vector<int>>& dungeon) {
//         memset(dp, -1, sizeof(dp));
//         return recur(0, 0, dungeon.size(), dungeon[0].size(), dungeon);
//     }
    
//     long recur(int i, int j, int n, int m, vector<vector<int>>& d){
//         if(i >= n || j >= m){
//             return INT_MAX;
//         }
        
//         if(i == n-1 && j == m-1){
//             return d[i][j] <= 0 ? abs(d[i][j]) + 1 : 1;
//         }
        
//         if(dp[i][j] != -1){
//             return dp[i][j];
//         }
        
//         int op1 = recur(i+1, j, n, m, d);
//         int op2 = recur(i, j+1, n, m, d);
        
//         int minHealthRequired = min(op1, op2) - d[i][j];
//         return dp[i][j] = (minHealthRequired <= 0) ? 1 : minHealthRequired;   
//     }
// };