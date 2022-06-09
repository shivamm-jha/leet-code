// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  static bool comp(pair<int,int>&a , pair<int,int>&b){
      if(a.second==b.second){
          return a.first < b.first;
      }
      return a.second > b.second;
  }
    int maxCoins(int a[], int b[], int t, int n) {
        // code here
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i]});
        }
        
        sort(v.begin(),v.end(),comp);
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(v[i].first<=t){
                ans+=(v[i].first * v[i].second);
                t-=v[i].first;
            }
            else{
                ans+= (v[i].second * t);
                t=0; break;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends