// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
     unordered_map<long long,long long> umap;
    long long result(long long currPos , long long top){
        if(currPos == top)return 1;
        if(currPos>top) return 0;
        if(umap.find(currPos)!=umap.end()){
            return umap[currPos];
        }
        long long OneJump = result(currPos+1, top);
        long long TwoJump = result(currPos+2,top);
        long long ThreeJump = result(currPos+3,top);
        umap[currPos] = (OneJump +TwoJump + ThreeJump)%1000000007;
        return (OneJump +TwoJump + ThreeJump)%1000000007;
    }
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        return result(0,n);
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends