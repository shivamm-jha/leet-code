// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		   int n =str.size();
		   int j=0;
		   int i = n-1;
		   int digit=0;
		   while(i>=0){
		       digit+= (str[i]-'0')* pow(2,j);
		       j++;
		       i--;
		   }
		   return digit;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends