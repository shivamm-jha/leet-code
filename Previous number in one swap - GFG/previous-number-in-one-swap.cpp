// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    
    string previousNumber(string s){
       
        if(is_sorted(s.begin(),s.end())){
             return "-1";
        }
        
        int n = s.size();
        int firstSwap, secondSwap;
        
        for(int i=n-1;i>=1;i--){
            if(s[i]-'0' < s[i-1]-'0'){
                firstSwap= i-1;
                break;
            }
        }
        int temp = s[firstSwap]-'0';
        int num =INT_MIN;
        
        for(int i=firstSwap+1;i<n;i++){
            if(s[i]-'0' < temp && s[i]-'0' > num){
                num=s[i]-'0';
                secondSwap= i;
            }
        }
        
        
        swap(s[firstSwap],s[secondSwap]);
        if(s[0]=='0')return "-1";
        return s;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.previousNumber(S) << endl;
    }
    return 0; 
}   // } Driver Code Ends