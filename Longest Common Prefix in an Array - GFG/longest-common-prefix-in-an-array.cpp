// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        string ans=arr[0];
        for(int i=1;i<n;i++){
            int j=0;
            string s=arr[i];
            while(ans[j]==s[j] and j< min(arr[i].size(),ans.size())){
                j++;
            }
            ans.erase(j);
            // while(arr[j]==ans[j] and j< min(arr[i].size(),ans.size())){
            //     j++;
            // }
            // ans.erase(j);
        }
        string ans2="-1";
        if(ans.size()==0)return ans2;
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends