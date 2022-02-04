// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int transfigure (string a, string b)
    {
        if(a.size()!=b.size()) return -1;
        int arr[256]={0};
        for(int i=0;i<a.size();i++){
            if(a[i]>='A' and a[i]<='Z')arr[a[i]-'A']++;
            else arr[a[i]-'a']++;
        }
        
        for(int i=0;i<a.size();i++){
            if(b[i]>='A' and b[i]<='Z')arr[b[i]-'A']--;
            else arr[b[i]-'a']--;
        }
        
        for(int i=0;i<256;i++){
            if(arr[i]!=0)return -1;
        }
        
        
        
        // -------------------------------------
        int res = 0;
        int n=a.size();
    for (int i=n-1, j=n-1; i>=0; )
    {
        // If there is a mismatch, then keep incrementing
        // result 'res' until B[j] is not found in A[0..i]
        while (i>=0 && a[i] != b[j])
        {
            i--;
            res++;
        }
 
        // If A[i] and B[j] match
        if (i >= 0)
        {
            i--;
            j--;
        }
    }
    return res;
        
        
    }
};

// { Driver Code Starts.


int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends