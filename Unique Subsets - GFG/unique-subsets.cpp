// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
       vector<vector<int>> ans;
    set<vector<int>> st;
//  time complexity 0(2^n * nlog(n) ) + 0(n) + 0(nlogn)   
    
    
    
    void solve(vector<int> &nums, vector<int> &empty, int i){
        if(i==nums.size()){
            st.insert(empty);
           
            return;
        }
//         pick
        empty.push_back(nums[i]);
        solve(nums,empty,i+1);
        empty.pop_back();
//         don't pick
        solve(nums,empty,i+1);
        
        
    }
    vector<vector<int> > AllSubsets(vector<int> nums, int n)
    {
        sort(nums.begin(),nums.end());
       vector<int> empty;
        solve(nums,empty,0);
        for(auto &i:st){
            ans.push_back(i);
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   


  // } Driver Code Ends