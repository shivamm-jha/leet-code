class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            addEdge(edges[i][0],edges[i][1],adj);
        }
        queue<int> q;
        q.push(source);
        vector<bool> vis(n,false);
        // for(int i=0;i<vis.size();i++)cout<<vis[i]<<" ";
        // cout<<endl;
        vis[source]=true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto val : adj[node]){
                if(vis[val]!=true){
                    q.push(val);
                    vis[val]=true;
                }
            }
            
        }
        
        // for(int i=0;i<vis.size();i++)cout<<vis[i]<<" ";
        
        return (vis[destination]);
    }
    
    void addEdge(int x, int y, vector<int> adj[]){
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
};