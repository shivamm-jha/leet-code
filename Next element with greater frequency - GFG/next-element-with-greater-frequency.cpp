// { Driver Code Starts
#include <bits/stdc++.h>
#define N 10000
using namespace std;


 // } Driver Code Ends
class Solution{
public:
static bool comp(pair<int,int> & a , pair<int,int> &b){
    return a.second> b.second;
}
    vector<int> print_next_greater_freq(int arr[],int n)
    {
       unordered_map<int,int> umap;
       for(int i=0;i<n;i++){
           umap[arr[i]]++;
       }
       
       vector<int> res (n,-1);
       stack<int> st;
       for(int i=n-1;i>=0;i--){
           if(st.empty()){
               st.push(arr[i]);
           }
           else{
               while(!st.empty() && umap[arr[i]]>= umap[st.top()]){
                   st.pop();
               }
               
               if(!st.empty()){
                   res[i]=st.top();
               }
           }
           st.push(arr[i]);
       }
       return res;
    }
};


// { Driver Code Starts.

int main()
{
    int arr[N];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        Solution ob;
        vector<int> ans=ob.print_next_greater_freq(arr,n);
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout << endl;
    }
	return 1;
}
  // } Driver Code Ends