class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // vector<pair<int,int>> v;
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> row;
        unordered_set<int> col;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    // v.push_back({i,j});
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row.find(i)!=row.end() || col.find(j)!=col.end()){
                    matrix[i][j]=0;
                }
            }
        }
        
//         T.c = m*n(2n + 2m) in worst case
        
//         for(auto &it: v){
//             int x =it.first;
//             int y = it.second;
//             int i=x, j=y;
//             while(i>=0){
//                 matrix[i][j]=0;
//                 i--;
//             }
//             i=x;
//             while(i<n){
//                 matrix[i][j]=0;
//                 i++;
//             }
            
//             i=x,j=y;
//             while(j>=0){
//                 matrix[i][j]=0;
//                 j--;
//             }
//             j=y;
//             while(j<m){
//                 matrix[i][j]=0;
//                 j++;
//             }
//         }
        
        
        
    }
};