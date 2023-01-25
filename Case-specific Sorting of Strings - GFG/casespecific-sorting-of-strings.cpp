//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string s1,s2;
        for(int i=0;i<n;i++){
            if(str[i]>='a' and str[i]<='z'){
                s1+=str[i];
            }
            else s2+=str[i];
        }
        
        sort(begin(s1), end(s1));
        sort(begin(s2), end(s2));
        
        int small=0, capital=0;
        
        string ans;
        
        for(int i=0;i<n;i++){
            if(str[i]>='a' and str[i]<='z'){
                ans+= s1[small++];
            }
            else ans+= s2[capital++];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends