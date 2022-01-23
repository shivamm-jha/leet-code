// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        string letters="";
        string num = "";
        int n= str.size();
        for(int i=0;i<n;i++){
            if(str[i]>='A' and str[i]<='Z')letters+=str[i];
            else num+=str[i];
        }
        
        int sum=0;
        for(int i=0;i<num.size();i++){
            sum+= num[i]-'0';
        }
       
        sort(letters.begin(),letters.end());
        letters+=to_string(sum);
        return letters;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}

  // } Driver Code Ends