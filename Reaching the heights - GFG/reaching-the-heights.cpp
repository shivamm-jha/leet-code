// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    sort(a,a+n);
    int i =0, j = n-1;
    vector<int> ans;
    while(i<j){
        ans.push_back(a[j--]);
        ans.push_back(a[i++]);
    }
    if(n%2!=0)ans.push_back(a[i++]);
    
    //for(auto &it: ans)cout<<it<<" ";
    int sum =0;
    for(int i=0;i<n;i++){
        if((i+1)%2==0){
            sum-=ans[i];
        }
        else sum+=ans[i];
    }
    //cout<<sum;
    if(sum<=0){
        cout<<"Not Possible";
        return {};
        
    }
    return ans;
}
