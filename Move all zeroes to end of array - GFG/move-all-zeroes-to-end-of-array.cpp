// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    
	   // time complexity (n)... space complexity 0(n)
	   
	   
	   
	   //int brr[n]={0};
	   //int i=0,j=0;
	   //while(i<n){
	   //    if(arr[i]!=0){
	   //        brr[j]=arr[i];
	   //        j++;
	   //    }
	   //    i++;
	   //}
	   
	   //for(i=0;i<n;i++){
	   //    arr[i]=brr[i];
	   //}
	   
	   
	   //better solution
	   //time complexity 0(n)... space complexity 0(1)
	   
	   //int i=0,j=1;
	   //while(i<n && j<n){
	   //    if(arr[i]==0 && arr[j]!=0){
	   //        swap(arr[i],arr[j]);
	   //        i++; j++;
	   //    }
	   //    else if(arr[i]==0 && arr[j]==0){
	   //        j++;
	   //    }
	   //    else i++, j++;
	   //}
	   
	   // other method
	   
	   int lastNonZeroFound =0;
	   for(int i=0;i<n;i++){
	       if(arr[i]!=0){
	           swap(arr[lastNonZeroFound++],arr[i]);
	       }
	   }
	   
	   for(int i=lastNonZeroFound; i<n;i++){
	       arr[i]=0;
	   }
	   
	    
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends