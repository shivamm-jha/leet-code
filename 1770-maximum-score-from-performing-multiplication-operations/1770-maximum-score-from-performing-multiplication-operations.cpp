class Solution {
public:
    // int dp[1001][1001];
    // int solve(vector<int>&nums,vector<int>&mul, int i, int curr, int n){
    //     int choice1 = nums[i] * mul[curr] + solve(nums,mul,i+1,curr+1,n);
    //     int choice2 = nums[(n-1) - (curr-i)] * mul[curr] + solve(nums,mul,i,curr+1,n);
    //     return max(choice1,choice2);
    // }
    // int maximumScore(vector<int>& nums, vector<int>& mul) {
    //     memset(dp,INT_MIN,sizeof(dp));
    //     int n = mul.size();
    //     return solve(nums,mul,0,0,n);
    // }
    vector<vector<int>>dp;
    int recurs(vector<int>& n, vector<int>& m,int i,int k)
    {
        
        if(k>=m.size())
        {
            return 0;
        }
           
        if(dp[i][k]!=INT_MAX)
        {
            return  dp[i][k];
        }
        
        int j=n.size()-(k-i)-1;
        int a= max( recurs(n,m,i+1,k+1)+(n[i]*m[k]),recurs(n,m,i,k+1)+(n[j]*m[k]));
        return dp[i][k]=a;
        
    }
    
    int maximumScore(vector<int>& nums, vector<int>& m) {
        dp.resize(m.size()+1,vector<int>(m.size()+1,INT_MAX));
        return recurs(nums,m,0,0);
    }

};

