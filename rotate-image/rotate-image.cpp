class Solution {
public:
    
    
    void rev(vector<vector<int>>& arr)
{
 int n=arr.size();
  
    for (int i = 0; i < n; i++) {
 
        
        int start = 0;
        int end = n - 1;
 
        
        while (start < end) {
 
           
            swap(arr[i][start],
                 arr[i][end]);
 
          
            start++;
            end--;
        }
    }
    }
    
    void transpose(vector<vector<int>>& arr)
{
        int n=arr.size();
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            swap(arr[i][j], arr[j][i]);
}
    
    
    void rotate(vector<vector<int>>& arr) {
//         taking transpose of matrix
       
        transpose(arr);
//         reversing the rows
        
         rev(arr);
       
    }
};