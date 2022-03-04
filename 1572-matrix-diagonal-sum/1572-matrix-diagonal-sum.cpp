class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(i==j)sum+=mat[i][j];
            }
        }
        
        int i=0,j=mat[0].size()-1;
        while(i<mat.size() && j>=0){
            if(i!=j){
                sum+=mat[i][j];
            }
            i++,j--;
        }
        return sum;
    }
};