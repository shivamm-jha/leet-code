// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	int mult(int mid , int n, int m){
	  unsigned  long long   ans=1;
	    for(int i=0;i<n;i++){ans*=mid; if(ans>m)return m+1;}
	    return (int)ans;
	}
	int NthRoot(int n, int m)
	{
	   //float ans = pow(m,1.0/n);
	   //if((int)ans == ans)return ans;
	   //return -1;
	   if(n==1 || m==1)return m;
	   int low=1,high=m;
	   while(low<=high){
	       int  mid = low + (high - low)/2;
	       int temp = mult(mid,n,m);
	       if(temp==m)return mid;
	       else if(temp > m) high = mid-1;
	       else low = mid+1;
	   }
	   return -1;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends