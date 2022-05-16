class Solution {
    
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
         for (int i = 0; i < n; i++) adj.add(new ArrayList<>());
        for(int a[]:edges){
           addEdge(a[0],a[1],adj); 
        }
        
        boolean vis[]= new boolean[n];
        
        for(int i=0;i<n;i++)vis[i]=false;
        
        Queue<Integer> q = new LinkedList<>();
        q.add(source);
        vis[source]=true;
        while(!q.isEmpty()){
            int node = q.peek();
            for(int val : adj.get(node)){
                if(vis[val]==false){
                    q.add(val);
                    vis[val]=true;
                }
            }
            q.poll();
        }
        
        return (vis[destination]);
        
    }
    
    public void addEdge(int x , int y,ArrayList<ArrayList<Integer>> adj){
        adj.get(x).add(y);
        adj.get(y).add(x);
    }
}





// ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
//         for (int i = 0; i < n; i++) adj.add(new ArrayList<>());
//         for (int i = 0; i < edges.length; i++) {
//             adj.get(edges[i][0]).add(edges[i][1]);
//             adj.get(edges[i][1]).add(edges[i][0]);
//         }
        
//         Queue<Integer> q = new LinkedList<>();
//         HashSet<Integer> vis = new HashSet<>();
//         q.add(start);
//         while (!q.isEmpty()) {
//             int u = q.poll();
//             vis.add(u);
//             if (u == end) return true;
//             for (int v : adj.get(u)) {
//                 if (!vis.contains(v)) {
//                     q.add(v);
//                 }
//             }
//         }
//         return false;
//     }