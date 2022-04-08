class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
//         base case.
        if(target< matrix[0][0]){
            return false;
        }
        int row_start = 0 , row_end = matrix.length-1;
        int row_ans=-1;
        
//          for row starting point..
        while(row_start<=row_end){
            int row_mid = (row_start+row_end)/2;
            if(matrix[row_mid][0]<= target){
                row_ans= row_mid;
                row_start = row_mid+1;
            }
            else row_end= row_mid-1;
        }
        System.out.print(row_ans);
//        
        int col_start=0, col_end = matrix[0].length-1;
        while(col_start<=col_end){
            int col_mid = (col_start+col_end)/2;
            if(matrix[row_ans][col_mid]==target){
                return true;
            }
            else if(matrix[row_ans][col_mid]> target){
                col_end = col_mid-1;
            }
            else col_start=col_mid+1;
        }
        return false;
        
    }
}