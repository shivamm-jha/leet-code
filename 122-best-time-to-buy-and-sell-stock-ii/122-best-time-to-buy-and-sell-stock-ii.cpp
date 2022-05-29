class Solution {
public:
    int dp[30001][2];
    
    int helper(vector<int> & nums, int idx, int flag){
        if(idx>=nums.size())return 0;
        if(dp[idx][flag]!=-1) return dp[idx][flag];
        if(flag){
            return dp[idx][flag] = max(-nums[idx] + helper(nums,idx+1,!flag),
                                      helper(nums,idx+1,flag));
        }
        else{
            return dp[idx][flag]= max(nums[idx]+helper(nums,idx+1,!flag),
                                     helper(nums,idx+1,flag));
        }
    }
    
    // int solve(vector<int> & nums, int i, int j, int &ans){
    //     if(j<nums.size()){
    //         int val = nums[j]-nums[i];
    //         if(val<=0) ans+=0;
    //         else ans+=val;
    //         return solve(nums,i+=1,j+=1,ans);
    //     }
    //     return ans;
    // }
    int maxProfit(vector<int>& prices) {
//          best solution T.C = 0(N)...
        
        
        // int n = prices.size();
        // int profit=0;
        // for(int i=0;i<n-1;i++){
        //     int val = prices[i+1]-prices[i];
        //     val>0? profit+=val : profit+=0;
        // }
        // return profit;
        
        
        
//         recurrsive way...
        
        // memset(dp,-1,sizeof(dp));
        // int ans = 0;
        // int res = solve(prices,0,1,ans);  
        // return res;
        
        memset(dp,-1,sizeof(dp));
        
        return helper(prices,0,1);
    }
};



// int find(int ind,vector<int> &v,bool buy,vector<vector<int>> &memo)
// {    
//     if(ind>=v.size()) return 0;
//     if(memo[ind][buy]!=-1) return memo[ind][buy];
    
//     if(buy) //if we are buying then next time we will sell else next time we will buy
//     {      //-prices[i], because bought stock of prices[i], expend money, !buy because next time sell
        
//        return memo[ind][buy]=max(-v[ind]+find(ind+1,v,!buy,memo),find(ind+1,v,buy,memo));  
//     }
//     else   //it's time to sell 
//     {      //+prices[i], because we now gain (i.e) sell our stock at rate of prices[i]
        
//        return memo[ind][buy]=max(v[ind]+find(ind+1,v,!buy,memo),find(ind+1,v,buy,memo));  
//     }
     
// }
//     int maxProfit(vector<int>& prices) {
        
//         int n=prices.size();
//         if(n<2) return 0;
//         vector<vector<int>> v(n+1,vector<int>(2,-1));
//         //passing here buy=1 because we will first buy then sell 
//         return find(0,prices,1,v); 
//     }
// };