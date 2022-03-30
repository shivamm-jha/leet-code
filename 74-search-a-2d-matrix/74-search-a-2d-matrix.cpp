class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int row_start = 0, row_end = n-1;
        int m = matrix[0].size();
       
        while(row_start<=row_end){
            if(target>=matrix[row_start][0] && target<=matrix[row_start][m-1]){
                int i=0, j = m-1;
                while(i<=j){
                    int mid = (i+j)/2;
                    if(matrix[row_start][mid]==target){
                        return true;
                    }
                    else if(matrix[row_start][mid]>target){
                        j=mid-1;
                    }
                    else i=mid+1;
                }
                return false;
            }
            if(target<matrix[row_start][0]) return false;
           while(row_start<= row_end && target>matrix[row_start][m-1])row_start++;
            
            
        }
    return false;
    }
};