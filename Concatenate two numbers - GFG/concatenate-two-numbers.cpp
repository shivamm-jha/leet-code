// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    long long countPairs(int n, int X, vector<int> nums){
        
        //  time complexity 0(n2)...
        
        // long long count=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(i!=j){
        //             string str=to_string(nums[i])+to_string(nums[j]);
        //             if(str==to_string(x))count++;
        //         }
        //     }
        // }
        // return count;
        
        unordered_map<string,int> umap;
        for(auto &i:nums){
            umap[to_string(i)]++;
        }
        
        long long count=0;
        
        string x=to_string(X);
        for(int i=1;i<x.size();i++){
            string t1 = x.substr(0,i);
            string t2= x.substr(i);
            if(umap.find(t1)!=umap.end() && umap.find(t2)!=umap.end()){
                if(t1==t2){
                    count+= umap[t1] *(umap[t2] -1);
                }
                else{
                    count+= umap[t1]* umap[t2];
                }
            }
        }
        return count;
    }
}; 

// { Driver Code Starts.
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        vector<int> numbers(N);
        for(int i=0;i<N;i++)
            cin>>numbers[i];
        Solution ob;
        long long ans = ob.countPairs(N, X, numbers);
        cout<<ans<<endl;
        
    }

    return 0; 
}  // } Driver Code Ends