// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int nums[], int n)
    {
        int start =0 , mid =0 , end = n-1;
        while(mid <= end){
           if(nums[mid]==0){
               swap(nums[start],nums[mid]);
               start++;mid++;
           }
            else if(nums[mid]==1) mid++;
            else {
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends