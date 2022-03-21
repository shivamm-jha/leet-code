// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    unordered_map<int,int> umap;
    int solve(int arr[], int start, int n){
        if(start>=n) return 0 ;
        
        if(umap.find(start)!=umap.end()){
            return umap[start];
        }
        
        //  take the curr ele..
        
        int ans1 = arr[start]  + solve(arr,start+2,n);
        
        //  dont take the curr ele..
        
       int ans2 =  solve(arr,start+1,n);
        
        umap[start] = max(ans1,ans2);
        return max(ans1,ans2);
        
    }
    int FindMaxSum(int arr[], int n)
    {
        int sum = 0;
        int res = solve(arr, 0 ,n);
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends