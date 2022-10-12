//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    
	    int i = a.size()-1;
	    int j = b.size()-1;
	    
	    int sum = 0, carry = 0;
	    
	    vector<int> ans;
	    
	    while(i>=0 && j>=0){
	        sum = (a[i]+b[j] + carry)%10;
	        carry = (a[i]+b[j] + carry)/10;
	        
	        ans.push_back(sum);
	        
	        i--;
	        j--;
	    }
	    
	    while(i>=0){
	        sum = (a[i]+carry)%10;
	        carry = (a[i]+carry)/10;
	        ans.push_back(sum);
	        i--;
	    }
	    
	    while(j>=0){
	        sum = (b[j]+carry)%10;
	        carry = (b[j]+carry)/10;
	        ans.push_back(sum);
	        j--;
	    }
	    
	    if(carry)ans.push_back(carry);
	    
	    
	    reverse(ans.begin(),ans.end());
	    
	    return ans;
	    
	}
	

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends