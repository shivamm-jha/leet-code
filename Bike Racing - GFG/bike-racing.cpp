// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    static bool ans(long n, long m , long h[] , long l, long a[] , long hour){
        long res =0;
        for(int i=0;i<n;++i){
            long temp = h[i] + (hour * a[i]);
            if(temp>=l){
                res+=temp;
            }
        }
        return res >=m;
    }
    long buzzTime(long n, long m, long l, long h[], long a[])
    {
        long start =1 , end = 100000000;
        long res=-1;
        while(start<= end){
            long mid = start + (end-start)/2;
            if(ans(n,m,h,l,a,mid)==true){
                res= mid;
                end = mid-1;
            }
            else start = mid+1;
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends