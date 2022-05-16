// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	   //  T.C = 0(N^2)  , S.C = 0(1)
	   
	   // int max_len = 0;
	   // for(int i=0;i<n;i++){
	   //     int currSum = 0;
	   //     for(int j=i;j<n;j++){
	   //         currSum+=arr[j];
	   //         if(currSum%k==0){
	   //             max_len= max(max_len,j-i+1);
	   //         }
	   //     }
	   // }
	    
	   // return max_len;
	   
	   
	   // T.c = 0(N) , S.C = 0(N)
	   
	   unordered_map<int,int> umap;
	   int currSum =0 , rem=0;
	   int max_len=0;
	   for(int i=0;i<n;i++){
	       currSum+=arr[i];
	       rem = currSum%k;
	       if(rem<0) rem+=k;
	       if(rem==0)max_len=max(max_len,i+1);
	       if(umap.find(rem)!=umap.end()){
	           max_len=max(max_len,i-umap[rem]);
	       }
	       else umap[rem]=i;
	       
	   }
	   return max_len;
	   
	}
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}
  // } Driver Code Ends