class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n= accounts.size();
        int m = accounts[0].size();
        int ans=INT_MIN,sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<m;j++){
                sum+=accounts[i][j];
            }
            ans=max(ans,sum);
        }
        return ans;
    }
};