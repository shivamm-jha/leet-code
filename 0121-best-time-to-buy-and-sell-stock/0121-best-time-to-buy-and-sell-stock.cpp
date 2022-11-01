class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int max_profit =0;
         int n = prices.size();
//         for(int i=0;i<n;i++){
//             int buy = prices[i];
//             int max_sell = 0;
//             for(int j=i+1;j<n;j++){
//                 max_sell = max(max_sell,prices[j]);
//             }
            
//             if(max_sell>buy){
//                 max_profit =  max(max_profit,max_sell-buy);
//             }
//         }
        
//         return max_profit;
        
        
        vector<int> right_max(n);
        right_max[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            right_max[i]= max(right_max[i+1],prices[i]);
        }
        
        int profit=0;
        
        for(int i=0;i<n;i++){
            profit= max(profit, right_max[i]-prices[i]);
        }
        
        return profit;
    }
};