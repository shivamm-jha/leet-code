class Solution {
public:
    #define ll long long
    void dfs(int src , unordered_map<int,vector<int>>& adj, ll &cnt, vector<int>&vis){
        vis[src]=1;
        cnt++;
        for(auto &it : adj[src]){
            if(vis[it]==0)dfs(it,adj,cnt,vis);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        ll ans = ((ll)n*(n-1))/2;
        // vector<int> adj[n+1];
        // for(int i=0;i<n;i++){
        //     int u = edges[i][0];
        //     int v = edges[i][1];
        //     adj[u].push_back(v);
        //     adj[v].push_back(u);
        // }
        unordered_map<int,vector<int>> adj; // making adjacency list
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<int> vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                ll cnt  =0;
                dfs(i,adj,cnt,vis);
                ans-=(cnt * (cnt-1)/2);
            }
        }
        
        return ans;
    }
};


//  typedef long long ll;
//     void dfs(int node, unordered_map<int,vector<int>>& m, ll& cnt, vector<int>& vis){
//         vis[node] = 1;
//         cnt++;
//         for(auto& i: m[node]){
//             if(vis[i]==0) dfs(i,m,cnt,vis);   
//         }
//     }
//     long long countPairs(int n, vector<vector<int>>& edges) {
//         unordered_map<int,vector<int>> m; // making adjacency list
//         for(int i=0;i<edges.size();i++){
//             m[edges[i][0]].push_back(edges[i][1]);
//             m[edges[i][1]].push_back(edges[i][0]);
//         }
//         ll ans = ((ll)n*(n-1))/2;
//         vector<int> vis(n,0);
//         for(int i=0;i<n;i++){
//             if(vis[i]==0){ // as node is not visited, we find the no. of nodes in current component.
//                 ll cnt = 0;
//                 dfs(i,m,cnt,vis);
//                 ans -= (cnt*(cnt-1))/2;
//             }
//         }
//         return ans;
//     }