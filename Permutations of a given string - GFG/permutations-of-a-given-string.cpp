// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	vector<string> ans;
    void solve(string nums, string empty,char freq[]){
        if(empty.size()==nums.size()){
            ans.push_back(empty);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                empty.push_back(nums[i]);
                freq[i]=1;
                solve(nums,empty,freq);
                freq[i]=0;
                empty.pop_back();
            }
        }
    }
		vector<string>find_permutation(string s)
		{
		    int n = s.size();
            char freq[n];
            for(int i=0;i<n;i++)freq[i]=0;
            string empty="";
            sort(s.begin(),s.end());
            solve(s,empty,freq);
            return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends