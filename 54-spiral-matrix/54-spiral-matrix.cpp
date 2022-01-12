class Solution {
public:
    

    vector<int> spiralOrder(vector<vector<int>>& arr) {
        int n  = arr.size(),m= arr[0].size();
        vector<int> ans;
        int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<=row_end and col_start<=col_end){
        for(int i = col_start;i<=col_end;i++){
            ans.push_back(arr[row_start][i]);
        }
       
        row_start++;
        
           if(row_start>row_end)break;
            for(int i = row_start;i<=row_end;i++){
            ans.push_back(arr[i][col_end]);
            }
        
       
        col_end--;
        
        if(col_start>col_end)break;
            for(int i =col_end ; i>=col_start ; i--){
            ans.push_back(arr[row_end][i]);
            }
        
       
        row_end--;
         
        for(int i= row_end ; i>=row_start ;i--){
            ans.push_back(arr[i][col_start]);
        }
        
        col_start++;
        
    }
        return ans;
    }
};