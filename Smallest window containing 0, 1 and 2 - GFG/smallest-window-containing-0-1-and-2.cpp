// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
       int prevOne =-1,prevTwo=-1,prevZero=-1;
       int ans =INT_MAX;
       int n = s.size();
       for(int i=0;i<n;i++){
           char ch = s[i];
           if(ch=='1')prevOne=i;
           else if(ch=='2')prevTwo=i;
           else if(ch=='0')prevZero=i;
           
           if(prevOne==-1 || prevTwo==-1 || prevZero==-1 ){
               continue;
           }
           else{
               int maxDis = min({prevOne,prevTwo,prevZero});
               ans=min(ans,i-maxDis+1);
           }
       }
       
       return (ans==INT_MAX)? -1 : ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}  // } Driver Code Ends