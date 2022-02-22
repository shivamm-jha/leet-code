// { Driver Code Starts
//Initial template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    int ExcelColumnNumber(string s)
    {
        int n =s.size();
        int i=0,j=1;
        int sum=0;
        while(i<n){
            sum+= (s[i]-64)* pow(26,(n-j));
            i++;
            j++;
        }
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.ExcelColumnNumber(s)<<endl;
    }
}  // } Driver Code Ends