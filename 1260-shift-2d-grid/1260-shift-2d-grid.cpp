class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        //if(grid.size()%k==0)return grid;
        int n = grid.size();
        int m = grid[0].size();
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v.push_back(grid[i][j]);
            }
        }
        
        k%=n*m;
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        int vec =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=v[vec++];
            }
        }
        return grid;
    }
};