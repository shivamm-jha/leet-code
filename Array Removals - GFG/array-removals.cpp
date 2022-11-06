//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int dp[102][102];
    int solve(vector<int>&nums,int i, int j, int k){
        if(i>j)return 0;
        
        if(nums[j]-nums[i]<=k){
            return 0;
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        return  dp[i][j] = 1+ min(solve(nums,i+1,j,k),solve(nums,i,j-1,k));
    }
    int removals(vector<int>& arr, int k){
        //Code here
        sort(begin(arr), end(arr));
        // memset(dp,-1,sizeof(dp));
       
        // return solve(arr,0,arr.size()-1,k);
        
        int ans = 0;
       
        for(int i=0;i<arr.size();i++){
            int mini = arr[i];
            int maxi = mini+k;
            int idx = lower_bound(begin(arr), end(arr), maxi)- begin(arr);
            // cout<<idx<<endl;
            ans = max(ans, (idx-i));
        }
        return arr.size()-ans;
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution ob;
        int ans = ob.removals(arr,k);
        
        cout<<ans<<endl;
    }
}



// } Driver Code Ends