// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int nums[], int n, int k) {
        // time complexity 0(n) .. space complexity 0(n)
        
    //   int arr[n];
    //   int currSum = 0;
    //   for(int i=0;i<n;i++){
    //       currSum+=nums[i];
    //       arr[i]=currSum;
    //   }
       
    //   int max_avg = arr[k-1];
    //   int idx=0;
    //   for(int i=k;i<n;i++){
    //       if(arr[i]-arr[i-k]>max_avg){
    //           max_avg=arr[i]-arr[i-k];
    //           idx=i-k+1;
    //       }
    //   }
       
    //   return idx;
    
    
    //  reducing the space complexity
    
    
        int currSum =0 , max_sum=0;
        for(int i=0;i<k;i++){
            currSum+=nums[i];
        }
        int idx = 0;
        max_sum=currSum;
        int i=0, j=k;
        while(j<n){
            currSum+=nums[j]-nums[i];
            if(currSum> max_sum){
                max_sum = currSum;
                idx=i+1;
            }
            i++;j++;
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