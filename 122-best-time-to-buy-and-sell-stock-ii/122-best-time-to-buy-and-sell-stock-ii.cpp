class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit=0;
        for(int i=0;i<n-1;i++){
            int val = prices[i+1]-prices[i];
            val>0? profit+=val : profit+=0;
        }
        return profit;
    }
};