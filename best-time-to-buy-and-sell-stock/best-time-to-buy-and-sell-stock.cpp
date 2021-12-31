class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
         vector<int> v(n,0);
       
       v[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            if(prices[i]>v[i+1]){
                v[i]=prices[i];
            }
            else{
                v[i]=v[i+1];
            }
        }
        
        int max_profit=0;
        for(int i=0;i<n;i++){
            max_profit=max(max_profit,v[i]-prices[i]);
        }
        return max_profit;
    }
};