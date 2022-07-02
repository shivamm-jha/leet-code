class Solution {
public:
    int dp[100001][2];
    int solve(vector<int>&nums,int i, int state , int fee){
        if(i==nums.size())return 0;
        int doNothing = 0 , doSomething = 0;
        if(dp[i][state]!=-1)return dp[i][state];
        doNothing = solve(nums,i+1,state,fee);
//          if we are holding a stock currently
        if(state==1){
           doSomething = (nums[i]-fee) + solve(nums,i+1,0,fee);
        }
        else{
            doSomething = -nums[i] + solve(nums,i+1,1,fee);
        }
        return dp[i][state] = max(doNothing,doSomething);
        
    }
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp,-1,sizeof(dp));
        return solve(prices,0,0,fee);
    }
};


// int maxans(vector<int> &prices,int fee,int day,bool bought,vector<vector<int>> &dp)
//     {
//         //basecase 
//         if(day>=prices.size())
//             return 0;
        
//         if(dp[day][bought]!=-1)
//             return dp[day][bought];
        
//         //##############   OPTION 1: do nothing on this day ########################
//             //just simply increase the day number and do nothing
//         int donothing = maxans(prices,fee,day+1,bought,dp);
        
//         //################ OPTION 2: do something ############################
//         int dosomething;
//         //we can do only two thing either we can sell or buy
//         //but for that we have condition of not involving in multiple transaction
//         //so we will go according to that
        
//         //if we are holding a stock==> then sell
//         if(bought)
//         {
//             //           profit with fee deduct + profit from remaining
//             dosomething = (prices[day]-fee) + maxans(prices,fee,day+1,false,dp);
//         }
//         //we are not holding any stock ==>then buy
//         else
//         {
//             //           profit by buying + profit from remaining
//             dosomething = -prices[day]+maxans(prices,fee,day+1,true,dp);
//         }
        
//         //finally the maximum of doing and notdoing
//         return dp[day][bought] = max(donothing,dosomething);
//     }
//     int maxProfit(vector<int>& prices, int fee) {
        
//         vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
//         //dp matrix is like N rows and two columns
//         //calling the function from day 0
//         return maxans(prices,fee,0,0,dp);
        
//     }