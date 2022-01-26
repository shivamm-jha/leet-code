// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    static bool comparator(const pair<int,int> & a ,const  pair<int,int> &b){
        return a.second > b.second;
    }
    vector<int> TopK(vector<int>& arr, int k)
    {
        unordered_map<int,int> umap;
         int n= arr.size();
        for(int i=0;i<n;i++){
            umap[arr[i]]++;
        }
        
       priority_queue<pair<int,int>> pq;
       for(auto it=umap.begin();it!=umap.end();it++){
           pq.push(make_pair(it->second, it->first));
       }
       
       vector<int> ans;
       while(!pq.empty() and k--){
           ans.push_back(pq.top().second);
           pq.pop();
       }
       
       return ans;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k ;
        cin>>n;
        
        vector<int>array(n);
        
        for(int i=0; i<n; i++)
            cin>>array[i];
            
        cin>>k;
        
        Solution obj;
        vector<int> result = obj.TopK(array,k);
        
        for(int i=0; i<result.size();i++)
            cout<<result[i]<<" ";

        cout<<"\n";

    }
    return 0;
}  // } Driver Code Ends