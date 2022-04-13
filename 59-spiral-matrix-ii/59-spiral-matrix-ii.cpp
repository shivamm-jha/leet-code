class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int num = 1;
        int i =0 , j=0;
        int row_start = 0 , col_start = 0;
        int row_end = n , col_end=n;
        
       int arr[n][n];
        while(i<row_end && j<col_end){
//              for left to right...
            while(i<row_end && j<col_end){
               arr[i][j++]=num++;
            }
            row_start++; j--; num--;
            //cout<<i<<" "<<j<<endl;
            
//              for top to bottom..
            while(i<row_end && j<col_end){
                arr[i++][j]=num++;
            }
            col_end--; i--; num--;
            
//              for right to left..
            
            while(i>=row_start && j>=col_start){
                arr[i][j--]=num++;
            }
            
            row_end--; j++; num--;
            
//              for bottom to top
            
            while(i>=row_start && j>=col_start){
                arr[i--][j]=num++;
            }
            col_start++; i++; num--;
            
            //cout<<i<<" "<<j<<endl;
            
        
        }
        
        
        
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
               temp.push_back(arr[i][j]);
            }
            v.push_back(temp);
            
        }
        return v;
    }
};