class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         brute force
        
       //  unordered_set<int> st;
       //  int  n= matrix.size();
       //  for(int i=0;i<n;i++){
       //      int m=matrix[i].size();
       //      for(int j=0;j<m;j++){
       //         st.insert(matrix[i][j]);
       //      }
       //  }
       // if(st.find(target)!=st.end())return true;
       //  else return false;
        
        
        int n=matrix.size();
        if(!n)return false;
        int m= matrix[0].size();
        if(!m)return false;
        int r=0,c=m-1;
        while(r<n && c>=0){
            if(matrix[r][c]==target)return true;
            else matrix[r][c]> target ? c-- : r++;
        }
        return false;
        
    }
};