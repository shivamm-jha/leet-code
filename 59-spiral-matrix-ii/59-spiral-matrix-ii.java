class Solution {
    public int[][] generateMatrix(int n) {
        int[][] ans = new int[n][n];
        int row_start = 0 , col_start =0;
        int row_end = n , col_end = n;
        int i =0 , j =0;
        int num =1;
        while(i<row_end && j<col_end){
//             to move left to right...
            while(i<row_end && j<col_end){
                ans[i][j++]= num++;
                
            }
           row_start++; j--; num--;
            
//              to move from top to bottom..
            
            while(i<row_end && j<col_end){
                ans[i++][j]=num++;
            }
            
            col_end--; i--; num--;
            
//              to move from right to left..
            
            while(i>=row_start && j>=col_start){
                ans[i][j--] = num++;
            }
            row_end--; j++ ; num--;
            
//             to move fromt bottom to top
            while(i>=row_start && j>= col_start){
                ans[i--][j]=num++;
            }
            
            col_start++; i++; num--;
            
            
        }
        
        
        
        return ans;
    }
}