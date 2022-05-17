// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:
    vector<string> ans;
    void dfs(string empty, string &s , int i ){
        if(i+1>=s.size()){
            empty+=s[i];
            ans.push_back(empty);
            return;
        }
        dfs(empty+s[i]+" ",s,i+1);
        dfs(empty+s[i],s,i+1);
    }
    vector<string> permutation(string S){
        string empty;
        dfs(empty,S,0);
        return ans;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends