class Solution {
public:
    unordered_map<int,int> umap;
    int solve(int i,vector<int> & cost){
        if(i>= cost.size())return 0;
        if(umap.find(i)!=umap.end()){
            return umap[i];
        }
        int op1 = solve(i+1,cost);
        int op2 = solve(i+2,cost);
        umap[i] = cost[i]+min(op1,op2);
        return cost[i]+min(op1,op2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(solve(0,cost) , solve(1,cost));
    }
};