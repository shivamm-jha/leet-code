class Solution {
public:
    
    int bfs(vector<int>adj[], int node){
        int ans = 1;
        //int n = adj.size();
        vector<int> vis(1000000,0);
        
        queue<int> q;
        q.push(node);
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
            vis[node]=1;
            
            for(auto &it: adj[node]){
                if(vis[it]==0){
                    q.push(it);
                    ans++;
                    vis[it]=1;
                }
            }
        }
        
        return ans;
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
//         int n = bombs.size();
        
        
        
//         vector<int>adj[n+1];
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 int x1= bombs[i][0];
//                 int y1 = bombs[i][1];
                
//                 int x2= bombs[j][0];
//                 int y2 = bombs[j][1];
                
//                 int d = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
                
//                 if(d<= bombs[i][2]){
//                     adj[i].push_back(j);
//                 }
//             }
//         }
        
//         // for(int i=0;i<n;i++){
//         //     for(int j=0;j<n;j++)cout<<adj[i][j]<<" ";
//         //     cout<<endl;
//         // }
        
//         int res = 1;
//         for(int i=0;i<n;i++){
//             res = max(res, bfs(adj,i));
//         }
        
//         return res;
        int n = bombs.size();
        int maxbombs = 0; vector<bool>visited(n,false);
        for(int i = 0; i<n; i++){
            queue<int>q; int countbombs = 0;
            q.push(i);
            while(!q.empty()){
                int u = q.front(); q.pop();
                countbombs++;
                visited[u] = true;
                long long x = bombs[u][0],y = bombs[u][1],r = bombs[u][2];
                for(int j = 0; j<n; j++){
                    if(!visited[j]){
                        long long dx = bombs[j][0],dy = bombs[j][1],rd = bombs[j][2];
                        long long dis = (x-dx)*(x-dx)+(y-dy)*(y-dy);
                        if(dis<=r*r){
                            visited[j] = true;
                            q.push(j);
                        }
                    }
                }
            }
            maxbombs = max(maxbombs,countbombs);
            for(int i = 0; i<n; i++){
                visited[i] = false;
            }
        }
        return maxbombs;
    }
};