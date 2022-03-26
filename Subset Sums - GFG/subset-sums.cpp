// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> ans;
    void solve(vector<int> &nums, vector<int> & empty,int i,int s){
        
        // brute force time complexity 0(2^n * n);
        
      if(i==nums.size()){
          
          ans.push_back(s);
          return;
           
      }
        // pick
       s+=nums[i];
        solve(nums,empty,i+1,s);
        s-=nums[i];
        
        //don't pick
        solve(nums,empty,i+1,s);
        
    }
    vector<int> subsetSums(vector<int> nums, int n)
    {
        vector<int> empty;
        solve(nums,empty,0,0);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends