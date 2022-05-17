// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // T.C = 0(N) , S.C = 0(1)
        
        
        // int min_ele = INT_MAX;
      
        // for(int i =0;i<=high;i++){
        //     min_ele=min(min_ele,arr[i]);
        // }
        // return min_ele;
        
        
        //  T.C = 0 (log n)  , S.C = 0(1)
        
        //  base case if array is not rotated !!
        
        if(arr[0]< arr[high])return arr[0];
        
        int ans= INT_MAX;
        while(low<=high){
            int m = (low+high)/2;
            if(arr[m]>= arr[0]){
                low = m+1;
            }
            else{
                ans= min(ans,arr[m]);
                high = m-1;
            }
        }
        
        return ans;
    }
};

// { Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}  // } Driver Code Ends