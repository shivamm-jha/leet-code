// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nthItem(int l1, int l2, int a[], int b[], int n)
    {
        set<int> st;
        for(int i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                st.insert(a[i]+b[j]);
            }
        }
        if(st.size() < n) return -1;
        
        auto it = st.begin();
        int count=1;
        while(count<n){
            it++;
            count++;
        }
        
        return *it;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int L1, L2, N;
        cin>>L1>>L2;
        int A[L1], B[L2];
        for(int i = 0;i < L1;i++)
            cin>>A[i];
        for(int i = 0;i < L2;i++)
            cin>>B[i];
        cin>>N;
        
        Solution ob;
        cout<<ob.nthItem(L1, L2, A, B, N)<<endl;
    }
    return 0;
}  // } Driver Code Ends