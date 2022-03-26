// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int nums[], int n, int k) {
       int arr[n];
       int currSum = 0;
       for(int i=0;i<n;i++){
           currSum+=nums[i];
           arr[i]=currSum;
       }
       
       int max_avg = arr[k-1];
       int idx=0;
       for(int i=k;i<n;i++){
           if(arr[i]-arr[i-k]>max_avg){
               max_avg=arr[i]-arr[i-k];
               idx=i-k+1;
           }
       }
       
       return idx;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends