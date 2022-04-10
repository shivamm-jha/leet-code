class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         brute force T.c =0(n*m)
        
       
//         int  n= matrix.size();
//         for(int i=0;i<n;i++){
//             int m=matrix[i].size();
//             for(int j=0;j<m;j++){
//                if(matrix[i][j]==target){
//                    return true;
//                }
//             }
//         }
       
//          return false;
        
        
//         binary search t.c = 0(n log m);
         
        int n = matrix.size();
        int m = matrix[0].size();
       for(int i=0;i<n;i++){
          int start = 0 , end = m-1;
           while(start<=end){
               int mid = (start+end)/2;
               if(matrix[i][mid]==target){
                   return true;
               }
               else if(matrix[i][mid]>target){
                   end = mid-1;
               }
               else start = mid+1;
           }
       }
        return false;
        
        
        
//         most optimal T.c = 0(n+m)
        
        // int n=matrix.size();
        // if(!n)return false;
        // int m= matrix[0].size();
        // if(!m)return false;
        // int r=0,c=m-1;
        // while(r<n && c>=0){
        //     if(matrix[r][c]==target)return true;
        //     else matrix[r][c]> target ? c-- : r++;
        // }
        // return false;
        
    }
};