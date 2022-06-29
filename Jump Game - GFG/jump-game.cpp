// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  bool dp[100001];
    bool solve(int nums[], int n , int i){
        if(i==n-1)return 1;
        int reachable = i+nums[i];
        if(dp[i])return dp;
        for(int k=i+1;k<=reachable;k++){
            if(solve(nums,n,k)){
                return dp[i]=true;
            }
        }
        return false;
        
    }
    int canReach(int nums[], int n) {
        // memset(dp,false,sizeof(dp));
        // if(solve(nums,n,0))return 1;
        // return 0;
        int maxReachable = 0;
        for(int i=0;i<n;i++){
            if(maxReachable < i)return 0;
            maxReachable = max(maxReachable,i+nums[i]);
        }
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends