// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void reArrange(int arr[], int n) {
        // vector<int> even;
        // vector<int> odd;
        // for(int i=0;i<n;i++){
        //     if(arr[i]%2==0){
        //         even.push_back(arr[i]);
        //     }
        //     else odd.push_back(arr[i]);
        // }
        // int j=0, k=0;
        // for(int i=0;i<n;i++){
        //     if(i%2==0){
        //         arr[i]=even[j++];
        //     }
        //     else arr[i]=odd[k++];
        // }
        
        int first_odd =-1, first_even=-1;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                first_even=arr[i]; break;
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                first_odd=arr[i]; break;
            }
        }
        
        for(int i=0;i<n;i++){
            //cout<<first_odd<<" "<<first_even<<endl;
            if(i%2==0 && arr[i]%2!=0){
                first_odd=arr[i];
                arr[i]=first_even;
            }
            else if(i%2!=0 && arr[i]%2==0){
                first_even =arr[i];
                arr[i]=first_odd;
            }
            else continue;
        }
        
        //for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    }
};

// { Driver Code Starts.

int check(int arr[], int n)
{
    int flag = 1;
    int c=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[i]%2)
            {
                flag = 0;
                break;
            }
            else
                c++;
        }
        else
        {
            if(arr[i]%2==0)
            {
                flag = 0;
                break;
            }
            else
                d++;
        }
    }
    if(c!=d)
        flag = 0;
        
    return flag;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        ob.reArrange(arr,N);
        
        cout<<check(arr,N)<<endl;
    }
    return 0;
}  // } Driver Code Ends