class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        
        
        for(auto &it: v){
            int x =it.first;
            int y = it.second;
            int i=x, j=y;
            while(i>=0){
                matrix[i][j]=0;
                i--;
            }
            i=x;
            while(i<n){
                matrix[i][j]=0;
                i++;
            }
            
            i=x,j=y;
            while(j>=0){
                matrix[i][j]=0;
                j--;
            }
            j=y;
            while(j<m){
                matrix[i][j]=0;
                j++;
            }
        }
    }
};