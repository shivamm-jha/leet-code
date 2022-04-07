// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
   
    string LCP(string nums[], int n)
    {
        sort(nums,nums+n);
        string possibleAns = nums[0];
        
        for(int i=1;i<n;i++){
            int j = 0;
            string str = nums[i];
            int k =0;
            while(str[k]==possibleAns[j]){
                k++;
                j++;
            }
            
            if(j<possibleAns.size()){
                possibleAns.erase(j);
            }
        }
        if(possibleAns.size()==0)return "-1";
        return possibleAns;
        
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
	        string arr[n];
	        for(int i = 0;i<n;i++)
	            cin>>arr[i];
	        Solution ob;
	        cout<<ob.LCP(arr,n)<<endl;
	    }
	return 0;
}  // } Driver Code Ends