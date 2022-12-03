//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    bool poss(vector<int>&nums, int mid, int k){
        
        int next = nums[0]+mid;
        k-=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] >= next){
                k--;
                next = nums[i]+mid;
            }
        }
        
        return k<=0;
        
        
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(begin(stalls), end(stalls));
        
        int low = 0, high = 1e9;
        
        int ans = -1;
        
        //cout<<poss(stalls,3,k);
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(poss(stalls,mid,k)){
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends