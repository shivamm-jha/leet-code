// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	static bool comp(pair<long long , long long> &a, pair<long long, long long> &b){
	    double r1 = (double)a.first/a.second;
	    double r2 = (double)b.first/b.second;
	    return r1 > r2;
	}
	
	long double maximumProfit(int n ,long long c, vector<long long> w, vector<long long> p){
	    vector<pair<long long , long long>> v;
	    for(int i=0;i<n;i++){
	        if(ceil(sqrt(w[i]))!=floor(sqrt(w[i]))) v.push_back({p[i],w[i]});
	    }
	    
	    sort(v.begin(),v.end(),comp);
	    
	    double max_profit =0;
	   for(int i=0;i,v.size();i++){
	       if(c>=v[i].second){
	           max_profit+=v[i].first;
	           c-=v[i].second;
	       }
	       else{
	           max_profit+= (1.0 * c* v[i].first)/(1.0 * v[i].second);
	           break;
	       }
	   }
	    return max_profit;
	    
	    
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends