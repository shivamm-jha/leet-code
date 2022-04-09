class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
//        brute : Tc= o(n^2)
        // int count = 0;
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid[i].size();j++){
        //         if(grid[i][j]<0)count++;
        //     }
        // }
        // return count;
        
//        better T.c = 0(n* log m)
        
        // int count = 0;
        // for(int i=0;i<grid.size();i++){
        //     int start = 0 , end = grid[i].size()-1;
        //     int first_negative=grid[i].size();
        //     while(start<=end){
        //         int mid=(start+end)/2;
        //         if(grid[i][mid]>=0){
        //             start = mid+1;
        //         }
        //         else{
        //             first_negative=mid;
        //             end=mid-1;
        //         }
        //     }
        //     count+=grid[i].size()-first_negative;
        // }
        // return count;
        
//     optimal T.c = 0(n+m)
        
        int row = 0 , col = grid[0].size()-1;
        int count = 0;
        while(row< grid.size() && col>=0){
            if(grid[row][col]<0){
                count+= grid.size()-row;
                col--;
            }
            else row++;
        }
        return count;
        
    }
};