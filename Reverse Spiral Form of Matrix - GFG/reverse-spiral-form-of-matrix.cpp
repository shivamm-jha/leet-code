//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> reverseSpiral(int r, int c, vector<vector<int>>&nums)  {
        // code here
        vector<int> ans;
        
        int row_start=0,col_start=0,row_end=r-1,col_end=c-1;
        
        int dir =0;
        
        while(row_start<=row_end && col_start<=col_end){
            if(dir==0){
                for(int i=col_start;i<=col_end;i++){
                    ans.push_back(nums[row_start][i]);
                }
                row_start++;
            }
            else if(dir==1){
                for(int i=row_start;i<=row_end;i++){
                    ans.push_back(nums[i][col_end]);
                }
                col_end--;
            }
            
            else if(dir==2){
                for(int i=col_end;i>=col_start;i--){
                    ans.push_back(nums[row_end][i]);
                    
                }
                row_end--;
            }
            
            else if(dir==3){
                for(int i=row_end;i>=row_start;i--){
                    ans.push_back(nums[i][col_start]);
                }
                col_start++;
            }
            
            dir= (dir+1)%4;
        }
        
        
        reverse(begin(ans),end(ans));
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, C;
        cin>>R>>C;
        vector<vector<int>> a(R, vector<int>(C, 0));
        for(int i = 0;i < R*C;i++)
            cin>>a[i/C][i%C];
        Solution ob;
        vector<int>ans=ob.reverseSpiral(R,C,a);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
    }
    return 0;
}

// } Driver Code Ends