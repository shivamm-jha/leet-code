class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int totalCost = 0;
        for(int i=0;i<costs.size();i++){
            totalCost+=costs[i][0];
            diff.push_back(costs[i][1]-costs[i][0]);
        }
        
        sort(diff.begin(),diff.end());
        
        for(int i=0;i<costs.size()/2;i++){
            totalCost+=diff[i];
        }
        
        return totalCost;
    }
};