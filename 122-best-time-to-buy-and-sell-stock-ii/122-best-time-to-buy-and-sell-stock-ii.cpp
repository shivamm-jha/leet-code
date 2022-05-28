class Solution {
public:
    int solve(vector<int> & nums, int i, int j, int &ans){
        if(j<nums.size()){
            int val = nums[j]-nums[i];
            if(val<=0) ans+=0;
            else ans+=val;
            return solve(nums,i+=1,j+=1,ans);
        }
        return ans;
    }
    int maxProfit(vector<int>& prices) {
//          best solution T.C = 0(N)...
        
        
        // int n = prices.size();
        // int profit=0;
        // for(int i=0;i<n-1;i++){
        //     int val = prices[i+1]-prices[i];
        //     val>0? profit+=val : profit+=0;
        // }
        // return profit;
        int ans = 0;
        int res = solve(prices,0,1,ans);  
        return res;
    }
};