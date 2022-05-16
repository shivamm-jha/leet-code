// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>> q;
        int n= grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    grid[i][j]=0;
                    break;
                }
            }
        }
        
        
        int src_x =0 , src_y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    src_x=i;
                    src_y=j;
                    break;
                }
            }
        }
        
        
        
        
       // cout<<q.front().first<<" "<<q.front().second<<endl;
        
        vector<vector<int>> dir = {{-1,0}, {1,0},{0,-1},{0,1}};
        
        while(!q.empty()){
            auto node = q.front();
            int x = node.first;
            int y = node.second;
            if(x==src_x && y==src_y) return true;
           
            for( auto arr : dir){
                int nx=x+ arr[0];
                int ny =y+ arr[1];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]!=0){
                    q.push({nx,ny});
                    grid[nx][ny]=0;
                }
            }
             q.pop();
        }
        
        return false;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends