// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int count(int n){
        vector<long long> v(30,1);
        v[0]=1, v[1]=1;
        for(int i=2;i<=30;i++){
            int j=0,k=i-1;
            long long sum=0;
            while(j<=i and k>=0){
                sum+=v[j]*v[k];
                j++; k--;
            }
            v[i]=sum;
        }
        
        return v[n/2];
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends