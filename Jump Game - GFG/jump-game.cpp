// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int solve(int nums[], int n , int i){
        if(i==n-1)return 1;
        int reachable = i+nums[i];
        for(int k=i+1;k<=reachable;k++){
            if(solve(nums,n,k)){
                return 1;
            }
        }
        return 0;
        
    }
    int canReach(int nums[], int n) {
        return solve(nums,n,0);
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