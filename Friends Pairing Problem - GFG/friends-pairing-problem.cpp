// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    unordered_map<long long,long long> umap;
    int MOD = 1000000007;
    long long solve(int n){
        if(n<=2) return n;
        
        if(umap.find(n)!=umap.end()){
            return umap[n];
        }
        
        //  if n is single
        
        long long single = solve(n-1)%MOD;
        
        // if n is paired
        
        long long paired = ((n-1)%MOD* solve(n-2)%MOD)%MOD;
        
        umap[n] = (single + paired);
        
        return (single + paired);
    }
    
    
    int countFriendsPairings(int n) 
    { 
        return solve(n)%MOD;
        
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
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 
  // } Driver Code Ends