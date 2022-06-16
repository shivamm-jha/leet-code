// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    bool bfs(int i , vector<int>adj[],vector<int>&color){
        queue<int> q;
        color[i]=1;
        q.push(i);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto & it : adj[node]){
                if(color[it]==-1){
                    if(color[node]==1)color[it]=0;
                    else color[it]=1;
                    q.push(it);
                }
                else if(color[it]==color[node])return false;
            }
        }
        return true;
    }
	bool isBipartite(int v, vector<int>adj[]){
	   vector<int>color(v,-1);
	  
	   for(int i=0;i<v;i++){
	       if(color[i]==-1){
	           if(!bfs(i,adj,color)){
	               return false;
	           }
	       }
	   }
	   return true;
	   
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends