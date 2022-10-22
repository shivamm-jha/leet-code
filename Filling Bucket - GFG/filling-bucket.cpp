//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int dp[100001];
    int mod = 1e8;
    int solve(int n){
        if(n<0)return 0;
        
        if(n==0)return 1;
        if(dp[n]!=-1)return dp[n];
        
        int move1 = solve(n-1);
        int move2 = solve(n-2);
        
        return dp[n]= (move1%mod + move2%mod)%mod;
    }
    int fillingBucket(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends