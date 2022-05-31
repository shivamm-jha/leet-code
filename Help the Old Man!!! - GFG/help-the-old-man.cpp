// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
int count = 0;
vector<int> ans;
void shift(int n, int box1, int box2,int box3, int N){
    if(n == 0){
        return;
    }
   
    shift(n-1,box1,box3,box2,N);
    count++;
    if(count == N){
        ans.push_back(box1);
        ans.push_back(box3);
        return;
    }
    shift(n-1,box2,box1,box3,N);
}

    vector<int> shiftPile(int N, int n){
        // code here
        shift(N,1,2,3,n);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends