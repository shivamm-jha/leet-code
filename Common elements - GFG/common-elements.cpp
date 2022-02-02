// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            vector<int> v;
            set<int> st;
            // for(int i=0;i<n1;i++){
            //     int flag1=0,flag2=0;
            //     for(int j=0;j<n2;j++){
            //         if(a[i]==b[j]){
            //             flag1=1; break;
            //         }
            //     }
                
            //     for(int k=0;k<n3;k++){
            //         if(a[i]==c[k]){
            //             flag2=1; break;
            //         }
            //     }
                
            //     if(flag1 && flag2)st.insert(a[i]);
            // }
            
            // for(auto &i:st){
            //     v.push_back(i);
            // }
            
            // return v;
            
         
        // for(int i=0;i<n1;i++){
        //     int key = a[i];
        //     int start = 0 , end = n2-1;
        //     int flag1=0,flag2=0;
        //     while(start<=end){
        //         int mid = start + (end-start)/2;
        //         if(b[mid]==key){
        //             flag1=1; break;
        //         }
        //         else if(b[mid]> key) end=mid-1;
        //         else start=mid+1;
        //     }
            
        //     start=0, end=n3-1;
        //     while(start<=end){
        //         int mid = start + (end-start)/2;
        //         if(c[mid]==key){
        //             flag2=1; break;
        //         }
        //         else if(c[mid]> key) end=mid-1;
        //         else start=mid+1;
        //     }
            
        //     if(flag1 and flag2) st.insert(key);
        // }
        
        // for(auto &i:st){
        //     v.push_back(i);
        // }
        
        // return v;
        
        
        unordered_set<int> st1,st2;
        set<int> st3;
        for(int i=0;i<n2;i++)st1.insert(b[i]);
        for(int i=0;i<n3;i++) st2.insert(c[i]);
        for(int i=0;i<n1;i++){
            if(st1.find(a[i])!=st1.end() and st2.find(a[i])!=st2.end()){
                st3.insert(a[i]);
            }
        }
        
        for(auto &i:st3){
            v.push_back(i);
        }
        return v;
        
        
        
        
            
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends