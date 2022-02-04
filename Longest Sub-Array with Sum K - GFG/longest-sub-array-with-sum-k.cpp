// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        
        //  time complexity 0(n2) and space complexity 0(1)
        
        // int ans=0,curr_sum=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         curr_sum+=arr[j];
        //         if(curr_sum==k)ans=max(ans,j-i+1);
        //     }
        // }
        
        // return ans;
        
        // space complexity 0(n) and space complexity 0(n)
        
        unordered_map<int,int> umap;
        int curr_sum=0,ans=0;
        for(int i=0;i<n;i++){
            curr_sum+=arr[i];
            if(curr_sum==k) ans = max(ans,i+1);
            if(umap.find(curr_sum)==umap.end())umap[curr_sum]=i;
            if(umap.find(curr_sum-k)!=umap.end())ans= max(ans,i-umap[curr_sum-k] );
           
        }
        return ans;
    } 
    
    
    // unordered_map<int,int> um;
    //     int sum=0,max_len=0;
    //     for(int i=0;i<N;i++)
    //     {
    //         sum+=A[i];
    //         if(sum==K)
    //         {
    //             max_len=i+1;
    //         }
    //         if(um.find(sum)==um.end())
    //         {
    //             um[sum]=i;
    //         }
    //         if(um.find(sum-K)!=um.end())
    //         {
    //             if(max_len<i-um[sum-K])
    //             {
    //                 max_len=i-um[sum-K];
    //             }
    //         }
            
    //     }
    //     return max_len;
    

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends