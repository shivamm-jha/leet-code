class Solution {
public:
    bool possible(int i, int j, int row_size ,int col_size){
        if(i>=0 && i<row_size && j>=0 && j<col_size)return true;
        return false;
    }
    
    bool solve(vector<vector<int>>&grid,int time){
        int n =grid.size();
        int m = grid[0].size();
        int rotten = 2;
        
        vector<vector<int>> nums= grid;
        for(int k=0;k<time;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(nums[i][j]==rotten){
                        if(possible(i,j+1,n,m) && nums[i][j+1]==1)nums[i][j+1]=rotten+1;
                        if(possible(i,j-1,n,m) && nums[i][j-1]==1)nums[i][j-1]=rotten+1;
                        if(possible(i+1,j,n,m) && nums[i+1][j]==1)nums[i+1][j]=rotten+1;
                        if(possible(i-1,j,n,m) && nums[i-1][j]==1)nums[i-1][j]=rotten+1;
                    }
                }
            }
            rotten+=1;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums[i][j]==1)return false;
            }
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        
        int low = 0 , high = 1e3;
        int ans = INT_MAX;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(solve(grid,mid)){
                ans=min(ans,mid);
                high = mid-1;
            }
            else low = mid+1;
        }
        
        return ans==INT_MAX ? -1 : ans;
    }
};