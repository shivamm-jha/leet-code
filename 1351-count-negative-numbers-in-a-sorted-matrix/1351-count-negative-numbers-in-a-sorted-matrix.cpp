class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
//         o(n^2)
        // int count = 0;
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid[i].size();j++){
        //         if(grid[i][j]<0)count++;
        //     }
        // }
        // return count;
        
//          0(nlog n)
        
        int count = 0;
        for(int i=0;i<grid.size();i++){
            int start = 0 , end = grid[i].size()-1;
            int first_negative=grid[i].size();
            while(start<=end){
                int mid=(start+end)/2;
                if(grid[i][mid]>=0){
                    start = mid+1;
                }
                else{
                    first_negative=mid;
                    end=mid-1;
                }
            }
            count+=grid[i].size()-first_negative;
        }
        return count;
    }
};